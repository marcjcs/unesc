//Elabore um algoritmo que leia dois n�meros e imprima qual � maior e qual � menor.
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
		printf("O numero maior �: %d\nO numero menor �: %d",num1,num2);
	}
	else
	{
		printf("O numero maior �: %d\nO numero menor �: %d",num2,num1);
	}
	getch();
}
