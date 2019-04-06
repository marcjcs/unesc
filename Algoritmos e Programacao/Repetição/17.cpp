/*Elabore um algoritmo que leia 5 números e imprima ao final, o menor número digitado.*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	int i,n,aux;
	for (i=1;i<=5;i++)
	{
		printf("Digite um número: ");
		scanf("%d",&n);
		if (i==1)
		{
			aux=n;
		}
		if (n<aux)
		{
			aux=n;
		}
	}
	printf("O menor número digitado foi: %d",aux);
	getch();
}
