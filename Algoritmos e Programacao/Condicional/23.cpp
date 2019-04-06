/*23. Elabore um algoritmo que receba duas notas de um aluno, calcule e mostre a média aritmética, e a mensagem
que segue a tabela abaixo. Para alunos de exame, calcule e mostre a nota que deverá ser tirada no exame
para aprovação final, considerando que a média no exame é 6,0.*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	float nota[1],media;
	printf("Digite a primeira nota: ");
	scanf("%f",&nota[0]);
	printf("Digite a segunda nota: ");
	scanf("%f",&nota[1]);
	media=(nota[0]+nota[1])/2.0;
	if (media<3)
	{
		printf("O aluno está reprovado");	
	}
	else if (media>=3.00&&media<7.0)
	{
	
		printf("O aluno está em exame, necessita de 6.0 pontos no exame para passar");
	}
	else if (media>=7)
	{
		printf("O aluno está aprovado");
	}
	getch ();
}
