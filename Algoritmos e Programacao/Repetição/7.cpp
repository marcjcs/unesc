/*Elabore um algoritmo que imprima todos os n�meros de 100 a 105, e ao final, a soma deles*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	int i, soma=0;
	for (i=100;i<=105;i++)
	{
		soma=soma+i;
		printf("%d\n",i);
	}
	printf("A soma �: %d",soma);
	getch();
}
