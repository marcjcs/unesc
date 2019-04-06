/*Faça um algoritmo que leia um nº inteiro e mostre uma mensagem indicando se este número é par ou ímpar, e se é positivo ou negativo.*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	int num;
	printf("Digite um número: ");
	scanf("%d",&num);
	if (num%2==0)
	{
		printf("\nO número é par");
		if (num<0)
		{
			printf("\nO número é negativo");
		}
		else
		{
			printf("\nO número é positivo");
		}
	}
	else
	{
		printf("\nO número é impar");
		if (num<0)
		{
			printf("\nO número é negativo");
		}
		else
		{
			printf("\nO número é positivo");
		}
	}
	getch();
}
