//16. Elabore um algoritmo que leia as seguintes notas de um aluno: a, b, c e d. O algoritmo deve imprimir a média harmônica.
#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	float a,b,c,d,resultado;
	printf("Digite as suas notas (uma em cada linha): \n");
	scanf("%f %f %f %f",&a,&b,&c,&d);
//	resultado=4/(1/a)+(1/b)+(1/c)+(1/d);
	printf("A sua média harmônica é: %.2f",4/((1/a)+(1/b)+(1/c)+(1/d)));
//	printf("A sua média harmônica é: %.2f",resultado);
	getch();
}
