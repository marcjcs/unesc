/*Elabore um algoritmo que leia 5 n�meros e imprima ao final, a m�dia dos n�meros digitados.*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	int i;
	float soma=0,nota;
	for (i=1;i<=5;i++)
	{
		printf("Entre com a nota: ");
		scanf("%f",&nota);
		soma=soma+nota;
	}
	printf("\nA m�dia do aluno �: %.2f",soma/5);
	getch();
}
