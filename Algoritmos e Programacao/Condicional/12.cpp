//12. Elabore um algoritmo que leia um número e imprima uma das mensagens: é múltiplo de 3, ou, não é múltiplo de 3.
#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	int num;
	printf("Digite um número inteiro: ");
	scanf("%d",&num);
	printf("O numero digitado %s", (num%3==0 ? "é múltiplo de 3":"não é múltiplo de 3"));
/*	if (num%3==0)
	{
		printf("O numero digitado é múltiplo de 3");
	}
	else
	{
		printf("O numero digitado não é múltiplo de 3");
	}*/
	getch();
}
