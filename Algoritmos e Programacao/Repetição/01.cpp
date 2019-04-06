/*Elabore um algoritmo que leia quatro números, e imprima a raiz quadrada de cada um.*/
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	int i;
	float n;
	for(i=1;i<=4;i++)
	{
		printf("Informe um numero: ");
		scanf("%f", &n);
		printf("Raiz quadrada: %.2f\n", sqrt(n));
	}
	getch();
}
