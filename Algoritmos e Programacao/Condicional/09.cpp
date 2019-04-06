//Elabore um algoritmo que leia três números, obrigatoriamente em ordem crescente, 
//e um quarto número que não siga esta regra. Mostre, em seguida, os quatro números em ordem decrescente.
#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	int num[3];
	printf("***Digite os numeros em ordem crescente, exceto o 4 numero***\nDigite o primeiro numero: ");
	scanf("%d",&num[0]);
	printf("Digite o segundo numero: ");
	scanf("%d",&num[1]);
	printf("Digite o terceiro numero: ");
	scanf("%d",&num[2]);
	printf("Digite o quarto numero: ");
	scanf("%d",&num[3]);
	if (num[2]<num[3])
	{
		printf("Ordem: %d - %d - %d - %d",num[3],num[2],num[1],num[0]);
	}
	else  if (num[3]<num[2]&&num[3]>num[1])
	{
		printf("Ordem: %d - %d - %d - %d",num[2],num[3],num[1],num[0]);
	}
	else if (num[3]<num[1]&&num[3]>num[0])
	{
		printf("Ordem: %d - %d - %d - %d",num[2],num[1],num[3],num[0]);
	}
	else 
	{
		printf("Ordem: %d - %d - %d - %d",num[2],num[1],num[0],num[3]);		
	}
	getch();
}
