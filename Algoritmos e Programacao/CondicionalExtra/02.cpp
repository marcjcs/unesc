/*Fa�a um algoritmo que leia dois n�meros e indique se s�o iguais ou , se diferentes , mostre o maior e o menor (nesta seq��ncia).*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	float num[1];
	printf("Digite dois n�meros:\n");
	scanf("%f %f",&num[0],&num[1]);
	if (num[0]==num[1])
	{
		printf("Os n�meros digitados s�o iguais");
	}
	else
	{
		if (num[1]>num[0])
		printf("O n�mero %.2f � o maior, e o n�mero %.2f � o menor",num[1],num[0]);
		else
		{
			if (num[0]>num[1])
			printf("O n�mero %.2f � o maior, e o n�mero %.2f � o menor",num[0],num[1]);
		}
	}
	getch();
}
