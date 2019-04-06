/*Faça um algoritmo que leia dois números e indique se são iguais ou , se diferentes , mostre o maior e o menor (nesta seqüência).*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	float num[1];
	printf("Digite dois números:\n");
	scanf("%f %f",&num[0],&num[1]);
	if (num[0]==num[1])
	{
		printf("Os números digitados são iguais");
	}
	else
	{
		if (num[1]>num[0])
		printf("O número %.2f é o maior, e o número %.2f é o menor",num[1],num[0]);
		else
		{
			if (num[0]>num[1])
			printf("O número %.2f é o maior, e o número %.2f é o menor",num[0],num[1]);
		}
	}
	getch();
}
