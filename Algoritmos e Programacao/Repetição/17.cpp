/*Elabore um algoritmo que leia 5 n�meros e imprima ao final, o menor n�mero digitado.*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	int i,n,aux;
	for (i=1;i<=5;i++)
	{
		printf("Digite um n�mero: ");
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
	printf("O menor n�mero digitado foi: %d",aux);
	getch();
}
