/*Elabore um algoritmo que leia 5 números, e imprima quantos são pares e quantos são ímpares.*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	int i,pares=0,impares=0,n;
	for (i=1;i<=5;i++)
	{
		printf("Digite um número: ");
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
	printf("\nQuantidade de pares: %d\nQuantidade de ímpares: %d",pares,impares);
	getch();
}
