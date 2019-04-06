/*Elabore um algoritmo que leia o nome, nota da avaliação 1, e nota da avaliação 2 de 15 alunos. Após cada
leitura, imprimir o nome, nota da avaliação 1, nota da avaliação 2 e média aritmética de cada aluno. */
#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	int i;
	float media,nota[1];
	char nome[50];
	for (i=1;i<=15;i++)
	{
		printf("Digite o seu nome: ");
		fflush(stdin);
		gets(nome);
		printf("Digite a nota da avaliação 1 e 2 (uma em cada linha): ");
		scanf(" %f %f",&nota[0],&nota[1]);
		media=(nota[0]+nota[1])/2.0;
		printf("\nNome: %s\nNota da avaliação 1: %.2f\nNota da avaliação 2: %.2f\nMédia aritmética: %.2f\n\n",nome,nota[0],nota[1],media);
	}
	getch();
}
