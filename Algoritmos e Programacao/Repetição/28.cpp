/*Elabore um algoritmo que imprima a tabuada de 0 a 9.*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	int i,n;
	for (i=0;i<=9;i++)
	{
		for (n=1;n<=10;n++)
		{
			printf("%d * %d = %d\n",i,n,i*n);
		}
	}
	getch();
}
