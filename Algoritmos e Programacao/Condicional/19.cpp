//Elabore um algoritmo que leia o ano de nascimento de uma pessoa e o ano atual. Ao final, 
//imprima a idade da pessoa. N�o se esque�a de verificar se o ano de nascimento � um ano v�lido. 
#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	int anonasc,anoatual,idade;
	anoatual2:
	printf("Digite o seu ano de nascimento: ");
	scanf("%d",&anonasc);
	printf("Digite o ano atual: ");
	scanf("%d",&anoatual);
	if (anoatual<anonasc)
	{
		printf("O ano digitado � inv�lido\n\n");
		goto anoatual2;
	}
	else
	{
		idade=anoatual-anonasc;
		printf("Voc� tem %d anos",idade);
	}
	getch();
}
