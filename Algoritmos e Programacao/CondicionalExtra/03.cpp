/*Faça um algoritmo que leia três números e mostre-os em ordem decrescente.*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	float num[2];
	printf("Digite três números:\n");
	scanf("%f %f %f",&num[0],&num[1],&num[2]);
	if (num[0]>num[1]&&num[1]>num[2])
	{
		printf("Ordem decrescente: %.2f - %.2f - %.2f",num[0],num[1],num[2]);
	}
	else if (num[1]>num[0]&&num[0]>num[2])
	{
		printf("Ordem decrescente: %.2f - %.2f - %.2f",num[1],num[0],num[2]);
	}
	else if (num[1]>num[2]&&num[2]>num[0])
	{
		printf("Ordem decrescente: %.2f - %.2f - %.2f",num[1],num[2],num[0]);
	}
	else if (num[0]>num[2]&&num[2]>num[1])
	{
		printf("Ordem decrescente: %.2f - %.2f - %.2f",num[0],num[2],num[1]);
	}
	else if (num[2]>num[0]&&num[0]>num[1])
	{
		printf("Ordem decrescente: %.2f - %.2f - %.2f",num[2],num[0],num[1]);
	}
	else if (num[2]>num[1]&&num[1]>num[0])
	{
		printf("Ordem decrescente: %.2f - %.2f - %.2f",num[2],num[1],num[0]);
	}
	
	getch();
}
