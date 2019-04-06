//11. Elabore um algoritmo que leia um número e imprima se ele é par ou ímpar.
//Obs: Para o número ser par, o resto de sua divisão por dois deve ser zero.
#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	int num;
	printf("Digite um número: ");
	scanf("%d",&num);
	printf("O número é: %s", (num % 2 == 0 ? "par" : "ímpar"));
	getch ();
}
