//Elabore um algoritmo que indique se um número digitado está compreendido entre 20 e 90, ou não.
#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	float num;
	printf("*******************Teste numero compreendido entre 20 e 90*******************\nDigite o numero a ser conferido: ");
	scanf("%f",&num);
	if (num>20&&num<90)
	{
		printf("O numero esta compreendido entre 20 e 90");
	}
	else 
	{
		printf("O numero nao esta compreendido entre 20 e 90");
	}
	getch();
}
