//Fa�a um algoritmo que leia dois n�meros e mostre qual o maior dos dois .
#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	float num[1];
	printf("Digite dois n�meros:\n");
	scanf("%f %f",&num[0],&num[1]);
	if (num[0]>num[1])
	{
		printf("O n�mero %.2f � o maior",num[0]);
	}
	else
	{
		printf("O n�mero %.2f � o maior",num[1]);
	}
	getch();
}
