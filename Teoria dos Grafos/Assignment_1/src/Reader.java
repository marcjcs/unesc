import java.io.*;
import java.nio.file.FileSystems;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.stream.Stream;

public class Reader {

    static Path getConfigFile() {
        // we're assuming config.txt will always be in Configuracao/config.txt
        return Paths.get("Temp" + FileSystems.getDefault().getSeparator() + "Configuracao" + FileSystems.getDefault().getSeparator() + "config.txt");
    }

    static void RunProcessorThread(Path rota) {
        if (rota.toString().startsWith("Temp" + FileSystems.getDefault().getSeparator() + "rota")) {
            try {
                Path processSuccess = GetFolderForSuccessProcess();
                Path processFailure = GetFolderForFailedProcess();
                Processor temp = new Processor(rota, processSuccess, processFailure);
                temp.start();
            } catch (IOException e) {
                e.printStackTrace();
            }
        }
    }

    static Path GetFolderForSuccessProcess() throws IOException {
        Path config = getConfigFile();
        BufferedReader reader = Files.newBufferedReader(config);
        String currentLine = null;
        while ((currentLine = reader.readLine()) != null) {
            if (currentLine.split("=")[0].equals("Processado")) {
                Path folder = Paths.get(currentLine.split("=")[1]);
                boolean dirExists = Files.exists(folder);
                if (dirExists) {
                    System.out.println("Success directory already exists");
                } else {
                    Files.createDirectory(folder);
                }
                return folder;
            }
        }
        throw new Error("Folder for success processes not found");
    }

    static Path GetFolderForFailedProcess() throws IOException {
        Path config = getConfigFile();
        BufferedReader reader = Files.newBufferedReader(config);
        String currentLine = null;
        while ((currentLine = reader.readLine()) != null) {
            if (currentLine.split("=")[0].equals("Não Processado")) {
                Path folder = Paths.get(currentLine.split("=")[1]);
                boolean dirExists = Files.exists(folder);
                if (dirExists) {
                    System.out.println("Failed directory already exists");
                } else {
                    Files.createDirectory(folder);
                }
                return folder;
            }
        }
        throw new Error("Folder for failed processes not found");
    }

    static void CheckForRotas() {
        try (Stream<Path> paths = Files.walk(Paths.get("Temp"))) {
            paths.filter(Files::isRegularFile).forEach(Reader::RunProcessorThread);
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    public static void main(String[] args) {
        Thread mainThread = new Thread();
        while (!mainThread.isInterrupted()) {
            CheckForRotas();
            try {
                Thread.sleep(10000);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }
}
