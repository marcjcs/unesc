//Elabore um algoritmo que leia as seguintes notas de um aluno: a, b, c e d. O algoritmo deve imprimir a média quadrática:
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	float a,b,c,d,resultado;
	printf("Digite as suas notas (uma em cada linha): \n");
	scanf("%f %f %f %f",&a,&b,&c,&d);
	printf("A sua média quadrática é: %.2f",sqrt((pow(a,2)+pow(b,2)+pow(c,2)+pow(d,2))/4.0));
}	
