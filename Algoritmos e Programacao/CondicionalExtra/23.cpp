/*Num determinado Estado, para transferências de veículos, o DETRAN cobra uma taxa de 1%
para carros fabricados antes de 1990 e uma taxa de 1.5% para os fabricados de 1900 em diante,
taxa esta incidindo sobre o valor de tabela do carro. O algoritmo abaixo lê o ano e o preço do
carro e a seguir calcula e imprime imposto a ser pago.*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	int ano;
	float precocarro;
	printf("Digite o ano em que o carro foi fabricado: ");
	scanf("%d",&ano);
	printf("Digite o preço do carro: ");
	scanf("%f",&precocarro);
	if (ano<1990)
	{
		printf("O imposto a ser pago é de: %.2f reais",precocarro*1/100);
	}
	else
	{
		printf("O imposto a ser pago é de: %.2f reais",precocarro*1.5/100);
	}
	getch();
}
