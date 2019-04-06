/*Elabore um algoritmo que leia 5 números e imprima ao final, a média dos números digitados.*/
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
	printf("\nA média do aluno é: %.2f",soma/5);
	getch();
}
