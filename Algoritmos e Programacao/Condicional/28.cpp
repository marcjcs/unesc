/*Elabore um algoritmo que receba o nome, o salário-base e o tempo de trabalho de um funcionário. Calcule e mostre:
a) O nome do funcionário
b) O imposto, conforme tabela a seguir:
c) A gratificação, conforme tabela a seguir.
d) O salário líquido, ou seja, salário-base menos imposto, mais gratificação;*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	char nomefunc[30];
	float salariobase,tempotrab,imposto,gratificacao,salarioliq;
	printf("Digite o nome do funcionário: ");
	gets(nomefunc);
	fflush(stdin);
	printf("Digite o salário-base do funcionário: ");
	scanf("%f",&salariobase);
	printf("Digite o tempo trabalhado do funcionário: ");
	scanf("%f",&tempotrab);
	if (salariobase<200)
	{
		imposto=0;
	}
	else if (salariobase>=200&&salariobase<=450)
	{
		imposto=salariobase*3/100;
	}
	else if (salariobase>450&&salariobase<700)
	{
		imposto=salariobase*8/100;
	}
	else
	{
		imposto=salariobase*12/100;
	}
	if (salariobase>500&&tempotrab<=3)
	{
		gratificacao=salariobase*20/100;
	}
	else if (salariobase>500&&tempotrab>3)
	{
		gratificacao=salariobase*30/100;
	}
	else if (salariobase<=500&&tempotrab<=3)
	{
		gratificacao=salariobase*23/100;
	}
	else if (salariobase<=500&&tempotrab>3&&tempotrab<6)
	{
		gratificacao=salariobase*35/100;
	}
	else if (salariobase<=500&&tempotrab>=6)
	{
		gratificacao=salariobase*33/100;
	}
	salarioliq=(salariobase-imposto)+gratificacao;
	printf("\nNome do funcionário: %s\nImposto: %.2f\nGratificação: %.2f\nSalário líquido: %.2f",nomefunc,imposto,gratificacao,salarioliq);
	getch();
}
