/*Elabore um algoritmo que leia 5 n�meros, e imprima quantos s�o pares e quantos s�o �mpares.*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	int i,pares=0,impares=0,n;
	for (i=1;i<=5;i++)
	{
		printf("Digite um n�mero: ");
		scanf("%d",&n);
		if (n%2==0)
		{
		pares++;
		}
		else
		{
		impares++;
		}
	}
	printf("\nQuantidade de pares: %d\nQuantidade de �mpares: %d",pares,impares);
	getch();
}
