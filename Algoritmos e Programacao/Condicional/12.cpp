//12. Elabore um algoritmo que leia um n�mero e imprima uma das mensagens: � m�ltiplo de 3, ou, n�o � m�ltiplo de 3.
#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	int num;
	printf("Digite um n�mero inteiro: ");
	scanf("%d",&num);
	printf("O numero digitado %s", (num%3==0 ? "� m�ltiplo de 3":"n�o � m�ltiplo de 3"));
/*	if (num%3==0)
	{
		printf("O numero digitado � m�ltiplo de 3");
	}
	else
	{
		printf("O numero digitado n�o � m�ltiplo de 3");
	}*/
	getch();
}
