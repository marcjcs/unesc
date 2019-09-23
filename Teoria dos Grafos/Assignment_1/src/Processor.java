import java.io.*;
import java.nio.file.*;
import java.util.HashMap;

public class Processor extends Thread {
    Path successFolder = null;
    Path failureFolder = null;

    public Processor(Path fileToAnalzyze, Path successFolder, Path failureFolder) {
        super(fileToAnalzyze.toString());
        this.successFolder = successFolder;
        this.failureFolder = failureFolder;
    }

    public void run() {
        BufferedReader reader = null;

        try {
            reader = Files.newBufferedReader(Paths.get(getName()));
        } catch (IOException e) {
            e.printStackTrace();
        }

        String currentLine = null;

        HashMap<String, String> countNodes = new HashMap<String, String>();

        // Ending with Value are the numbers the file provides us
        Integer weightLinesValue = 0;
        Integer weightAggregatorValue = 0;
        Integer nodeCountValue = 0;
        Integer nodeLinesValue = 0;
        Boolean headerFound = false;
        Boolean nodesLineFound = false;
        Boolean weightLineFound = false;
        Boolean trailerLineFound = false;

        // Those are the values that we count during the execution of the processor
        Integer nodeLinesCount = 0;
        Integer weightLinesCount = 0;
        Integer weightAggregator = 0;

        while (true) {
                try {
                    if (!((currentLine = reader.readLine()) != null)) break;
                } catch (IOException e) {
                    e.printStackTrace();
                }

                if (currentLine.startsWith("00")) {
                    try {
                        headerFound = true;
                        nodeCountValue = Integer.parseInt(currentLine.substring(2, 4));
                        weightAggregatorValue = Integer.parseInt(currentLine.substring(4, 6));
                    } catch (Exception e) {
                        try {
                            moveToNaoProcessado();
                            break;
                        } catch (IOException ex) {
                            ex.printStackTrace();
                        }
                    }
                }
                if (currentLine.startsWith("01")) {
                    try {
                        nodesLineFound = true;
                        String[] nodes = currentLine.substring(2, 5).split("=", 2);
                        for (String node : nodes) {
                            countNodes.put(node, "Node");
                        }
                        nodeLinesCount++;
                    } catch (Exception e) {
                        try {
                            moveToNaoProcessado();
                            break;
                        } catch (IOException ex) {
                            ex.printStackTrace();
                        }
                    }
                }
                if (currentLine.startsWith("02")) {
                    try {
                        weightLineFound = true;
                        String lineWeight = currentLine.split("=", 2)[1];
                        weightAggregator += Integer.parseInt(lineWeight);
                        weightLinesCount++;
                    } catch (Exception e) {
                        try {
                            moveToNaoProcessado();
                            break;
                        } catch (IOException ex) {
                            ex.printStackTrace();
                        }
                    }
                }
                if (currentLine.startsWith("09")) {
                    try {
                        trailerLineFound = true;
                        nodeLinesValue = Integer.parseInt(currentLine.split(";")[0].substring(2, 4));
                        weightLinesValue = Integer.parseInt(currentLine.split(";")[1]);
                    } catch (Exception e) {
                        try {
                            moveToNaoProcessado();
                            break;
                        } catch (IOException ex) {
                            ex.printStackTrace();
                        }
                    }
                    if (checkNodeValue(nodeCountValue, countNodes) &&
                        checkNodeLines(nodeLinesCount, nodeLinesValue) &&
                        checkWeightLines(weightLinesCount, weightLinesValue) &&
                        checkWeightValue(weightAggregator, weightAggregatorValue)) {
                        try {
                            moveToProcessado();
                            break;
                        } catch (IOException e) {
                            e.printStackTrace();
                        }
                    } else {
                        try {
                            moveToNaoProcessado();
                            break;
                        } catch (IOException e) {
                            e.printStackTrace();
                        }
                    }
                }
        }

        // Check if file is empty and move to NaoProcessado
        if (
                (weightLinesValue == 0 &&
                        weightAggregatorValue == 0 &&
                        nodeCountValue == 0 &&
                        nodeLinesValue == 0 &&
                        nodeLinesCount == 0 &&
                        weightLinesCount == 0 &&
                        weightAggregator == 0)
                ||
                (headerFound == false ||
                        nodesLineFound == false ||
                        weightLineFound == false ||
                        trailerLineFound == false)
        ) {
            try {
                moveToNaoProcessado();
            } catch (IOException e) {
                e.printStackTrace();
            }
        }
    }

    public boolean checkNodeValue(Integer a, HashMap<String, String> b) {
        return a == b.size();
    }

    public boolean checkNodeLines(Integer a, Integer b) {
        return a == b;
    }

    public boolean checkWeightLines(Integer a, Integer b) {
        return a == b;
    }

    public boolean checkWeightValue(Integer a, Integer b) {
        return a == b;
    }

    public void moveToProcessado() throws IOException {
        Path temp = Files.move(Paths.get(getName()), Paths.get(successFolder + FileSystems.getDefault().getSeparator() + getName().split("\\\\")[1]), StandardCopyOption.REPLACE_EXISTING);
        if (temp != null) {
            System.out.println("File " + getName() + " moved successfully to " + successFolder.toString());
        } else {
            System.out.println("Failed to move the file " + getName() + " to" + successFolder.toString());
        }
    }

    public void moveToNaoProcessado() throws IOException {
        Path temp = Files.move(Paths.get(getName()), Paths.get(failureFolder + FileSystems.getDefault().getSeparator() + getName().split("\\\\")[1]), StandardCopyOption.REPLACE_EXISTING);
        if(temp != null) {
            System.out.println("File " + getName() + " moved successfully to " + failureFolder.toString());
        } else {
            System.out.println("Failed to move the file " + getName() + " to " + failureFolder.toString());
        }
    }
}