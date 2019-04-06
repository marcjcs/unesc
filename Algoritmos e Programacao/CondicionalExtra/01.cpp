//Faça um algoritmo que leia dois números e mostre qual o maior dos dois .
#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	float num[1];
	printf("Digite dois números:\n");
	scanf("%f %f",&num[0],&num[1]);
	if (num[0]>num[1])
	{
		printf("O número %.2f é o maior",num[0]);
	}
	else
	{
		printf("O número %.2f é o maior",num[1]);
	}
	getch();
}
