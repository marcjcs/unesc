#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	int i,alunoreprovado=0,alunoexame=0,alunoaprovado=0;
	float nota[1],media,soma=0;
	for (i=1;i<=6;i++)
	{
		printf("Digite a sua primeira nota: ");
		scanf("%f",&nota[0]);
		printf("Digite a sua segunda nota: ");
		scanf("%f",&nota[1]);
		media=(nota[0]+nota[1])/2;
		soma=soma+media;
		if (media<=3)
		{
			printf("Sua média é: %.2f\nReprovado\n\n",media);
			alunoreprovado++;
		}
		else if (media>3&&media<7)
		{
			printf("A sua média é %.2f\nEm exame\n\n",media);
			alunoexame++;
		}
		else
		{
			printf("A sua média é %.2f\nAprovado\n\n",media);
			alunoaprovado++;
		}
	}
	printf("Total de alunos aprovados: %d",alunoaprovado);
	printf("\nTotal de alunos em exame: %d",alunoexame);
	printf("\nTotal de alunos reprovados: %d",alunoreprovado);
	printf("\nMédia da classe: %.2f",soma/6.0);
	getch();
}
