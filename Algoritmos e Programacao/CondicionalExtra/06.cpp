/*Elaborar um algoritmo que l� 3 valores a,b,c e os escreve. A seguir, encontre o maior dos 3 valores e o escreva com a mensagem : "� o maior�.*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	float valora,valorb,valorc;
	printf("Digite tr�s n�meros (um em cada linha):\n");
	scanf("%f %f %f",&valora,&valorb,&valorc);
	printf("\nValor A: %.2f\nValor B: %.2f\nValor C: %.2f",valora,valorb,valorc);
	if (valora>valorb&&valora>valorc)
	{
		printf("\n%.2f � o maior",valora);
	}
	else if (valorb>valora&&valorb>valorc)
	{
		printf("\n%.2f � o maior",valorb);
	}
	else
	{
		printf("\n%.2f � o maior",valorc);
	}
	getch();
}
