/*Fa�a um algoritmo que leia um n� inteiro e mostre uma mensagem indicando se este n�mero � par ou �mpar, e se � positivo ou negativo.*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	int num;
	printf("Digite um n�mero: ");
	scanf("%d",&num);
	if (num%2==0)
	{
		printf("\nO n�mero � par");
		if (num<0)
		{
			printf("\nO n�mero � negativo");
		}
		else
		{
			printf("\nO n�mero � positivo");
		}
	}
	else
	{
		printf("\nO n�mero � impar");
		if (num<0)
		{
			printf("\nO n�mero � negativo");
		}
		else
		{
			printf("\nO n�mero � positivo");
		}
	}
	getch();
}
