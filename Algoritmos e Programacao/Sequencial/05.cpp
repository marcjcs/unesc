//Elabore um algoritmo que leia dois números e imprima o maior número.
#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	int num1,num2;
	printf("Digite o primeiro numero: ");
	scanf("%d",&num1);
	printf("Digite o segundo numero: ");
	scanf("%d",&num2);
	if (num1>num2)
	{
		printf("O numero maior e: %d",num1);
	}
	else
	{
		printf("O numero maior e: %d",num2);
	}
	getch();
}
