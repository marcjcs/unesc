//27. Um comerciante calcula o valor de venda, tendo em vista a tabela a seguir:
//Elabore um algoritmo que possa entrar com o nome do produto, o valor de compra e imprimir o nome do produto e seu valor de venda.
#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	char nomeprod[30];
	float valorcompra,valorvenda;
	printf("Digite o nome do produto: ");
	gets(nomeprod);
	fflush(stdin);
	printf("Digite o valor de compra: ");
	scanf("%f",&valorcompra);
	if (valorcompra<100)
	{
		valorvenda=(valorcompra*70/100)+valorcompra;
		printf("\nNome do produto: %s\nValor de venda: %.2f",nomeprod,valorvenda);
	}
	else if (valorcompra<30&&valorcompra>=10)
	{
		valorvenda=(valorcompra*50/100)+valorcompra;
		printf("\nNome do produto: %s\nValor de venda: %.2f",nomeprod,valorvenda);
	}
	else if (valorcompra<50&&valorcompra>=30)
	{
		valorvenda=(valorcompra*40/100)+valorcompra;
		printf("\nNome do produto: %s\nValor de venda: %.2f",nomeprod,valorvenda);
	}
	else
	{
		valorvenda=(valorcompra*30/100)+valorcompra;
		printf("\nNome do produto: %s\nValor de venda: %.2f",nomeprod,valorvenda);
	}
	getch();
}
