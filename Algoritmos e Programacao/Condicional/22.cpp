/*Elabore um algoritmo que leia o nome, nota da avalia��o 1 e nota da avalia��o 2 de um aluno. Ao final, imprima o nome do aluno, suas notas, a m�dia 
aritm�tica euma das mensagens: Aprovado, Reprovado ou em Prova Final, considerando que a m�dia � 7,0 para aprova��o, menor que 3,0 para 
reprova��o e as demais em prova final.*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	char nome[30];
	float nota[1],media;
	printf("Digite o seu nome: ");
	gets(nome);
	fflush(stdin);
	printf("Digite as notas da avalia��o 1 e 2 (uma em cada linha):\n");
	scanf("%f %f",&nota[0],&nota[1]);
	media=(nota[0]+nota[1])/2;
	if (media>=7)
	{
		printf("\nNome: %s\nNotas: %.2f e %.2f\nM�dia: %.2f\nVoc� foi aprovado",nome,nota[0],nota[1],media);
	}
	else if (media<3)
	{
		printf("\nNome: %s\nNotas: %.2f e %.2f\nM�dia: %.2f\nVoc� foi reprovado",nome,nota[0],nota[1],media);
	}
	else
	{
		printf("\nNome: %s\nNotas: %.2f e %.2f\nM�dia: %.2f\nVoc� est� em exame",nome,nota[0],nota[1],media);
	}
	getch();
}
