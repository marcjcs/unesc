/*Elabore um algoritmo que imprima todos os n�meros de 100 at� 1.*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	int i;
	for (i=100;i>=1;i--)
	{
		printf("%d\n",i);
	}
	getch();
}
