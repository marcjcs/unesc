//15. Elabore um algoritmo que entre com o valor de x, calcule e imprima o valor de f(x) = 8 / 2-x.
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	float x,resultado;
	printf("***********Função em questão: f(x) = 8 / (2-x)***********\nDigite o valor de x: ");
	scanf("%f",&x);
	resultado=8/(2-x);
	if(x==2)
	{
		printf("O resultado é indefinido");
	}
	else
	{
		printf("O resultado é: %.2f",resultado);
	}
	getch();
}
