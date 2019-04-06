//Elabore um algoritmo que leia dois números e imprima qual é maior e qual é menor.
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
		printf("O numero maior é: %d\nO numero menor é: %d",num1,num2);
	}
	else
	{
		printf("O numero maior é: %d\nO numero menor é: %d",num2,num1);
	}
	getch();
}
