/*Elabore um algoritmo que leia quatro n�meros, e ao final, imprima a m�dia desses n�meros*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	int i;
	float n,soma;
	for (i=1;i<=4;i++)
	{
		printf("Digite um n�mero: ");
		scanf("%f",&n);
		soma=soma+n;
	}
	printf("A m�dia dos n�meros � de: %.2f",soma/4);
	getch();
}
