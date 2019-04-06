/*Elabore um algoritmo que leia 5 números, e imprima o percentual de números pares informados.*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	int i,n,soma=0;
	for (i=1;i<=5;i++)
	{
		printf("Digite um número: ");
		scanf("%d",&n);
		if (n%2==0)
		{
		soma++;
		}
	}
	printf("\nO percentual de números pares informados é de: %d%%",(soma*100)/5);
	getch();
}
