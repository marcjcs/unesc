/*Um comerciante comprou um produto e quer vend�-lo com um lucro de 45%, se o valor da compra for menor
que R$ 20,00; caso contr�rio, o lucro ser� de 30%. Elabore um algoritmo que leia o valor do produto e imprima
o valor de venda, considerando o lucro que dever� ser calculado.*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	float valorcompra,lucro,valorvenda;
	printf("Digite o valor da compra: ");
	scanf("%f",&valorcompra);
	if (valorcompra<20)
	{
		lucro=valorcompra*45/100;
		valorvenda=lucro+valorcompra;
		printf("O produto ser� vendido a: %.2f",valorvenda);
	}
	else
	{
		lucro=valorcompra*30/100;
		valorvenda=lucro+valorcompra;
		printf("O produto ser� vendido a: %.2f",valorvenda);
	}
	getch();
}
