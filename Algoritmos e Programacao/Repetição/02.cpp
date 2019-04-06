/*Elabore um algoritmo que leia quatro números, e ao final, imprima a média desses números*/
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
		printf("Digite um número: ");
		scanf("%f",&n);
		soma=soma+n;
	}
	printf("A média dos números é de: %.2f",soma/4);
	getch();
}
