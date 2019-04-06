/*Escrever um algoritmo que calcule os sucessivos valores de E usando a série abaixo e considerando primeiro 3 termos, depois 4 termos e, por fim, 5 termos:
E = 1 + 1 / 1! + 1 / 2! + 1 / 3! + 1 / 4!*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	int e;

	e=1+1/(1*1)+1/(1*2)+1/(1*2*3)+1/(1*2*3*4);
	printf("%d",e);
}
