/*Elabore um algoritmo que imprima a tabuada de um número que será informado pelo usuário.*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	float numero;
	int i;
	printf("Informe um número: ");
	scanf("%f",&numero);
	printf("\nTábuada do %.2f:\n",numero);
	for (i=1;i<=10;i++)
	{
		printf("%d: %.2f\n",i,numero*i);
	}
	getch();
}
