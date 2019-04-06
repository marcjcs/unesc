//Elabore um algoritmo que imprima os 10 primeiros termos da série de Fibonacci.
#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	int i,primeiro=0,segundo=1,proximo;
	for (i=1;i<=10;i++)
	{
		if (i==1)
		{
			proximo=primeiro;
		}
		else 
		{
			proximo=primeiro+segundo;
			primeiro=segundo;
			segundo=proximo;
		}
		printf("%d\n",proximo);
	}
	getch();
}
