/*Elabore um algoritmo que leia 20 n�meros e imprima a soma dos positivos, e a quantidade de n�meros
negativos.*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	int i,qtdneg=0,n,soma=0;
	for (i=1;i<=20;i++)
	{
		printf("Digite um n�mero: ");
		scanf("%d",&n);
		if (n>0)
		{
		soma=soma+n;
		}
		else
		{
		qtdneg++;
		}
	}
	printf("\nSoma dos positivos: %d\nQuantidade de negativos: %d",soma,qtdneg);
	getch();
}
