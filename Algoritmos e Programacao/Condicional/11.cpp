//11. Elabore um algoritmo que leia um n�mero e imprima se ele � par ou �mpar.
//Obs: Para o n�mero ser par, o resto de sua divis�o por dois deve ser zero.
#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	int num;
	printf("Digite um n�mero: ");
	scanf("%d",&num);
	printf("O n�mero �: %s", (num % 2 == 0 ? "par" : "�mpar"));
	getch ();
}
