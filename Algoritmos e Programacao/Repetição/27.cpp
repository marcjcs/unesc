/*Elabore um algoritmo que imprima a tabuada de um n�mero que ser� informado pelo usu�rio.*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	float numero;
	int i;
	printf("Informe um n�mero: ");
	scanf("%f",&numero);
	printf("\nT�buada do %.2f:\n",numero);
	for (i=1;i<=10;i++)
	{
		printf("%d: %.2f\n",i,numero*i);
	}
	getch();
}
