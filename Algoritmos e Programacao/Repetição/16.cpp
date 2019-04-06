/*Elabore um algoritmo que leia 5 números e imprima ao final, o maior número digitado.*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	int i,n,aux=0;
	for (i=1;i<=5;i++)
	{
		printf("Digite um número: ");
		scanf("%d",&n);
		if (n>=aux)
		{
		aux=n;
		}
	}
	printf("O maior número digitado foi: %d",aux);
	getch();
}
