/*Elabore um algoritmo que imprima todos os números de 250 a 260.*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	int i;
	for (i=250;i<=260;i++)
	{
		printf("%d\n",i);
	}
	getch();
}
