/*Elabore um algoritmo que receba a idade e o peso de 20 pessoas. Calcular e imprimir as médias dos pesos das
pessoas da mesma faixa etária. As faixas etárias são: de 0 a 18 anos, e maiores de 28 anos.*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	int i,idade;
	float peso,pesofaixa1=0,pesofaixa2=0,n1=0,n2=0;
	for (i=1;i<=20;i++)
	{
		printf("Digite a idade da pessoa: ");
		scanf("%d",&idade);
		printf("Digite o peso da pessoa: ");
		scanf("%f",&peso);
		if (idade<=18)
		{
			pesofaixa1=pesofaixa1+peso;
			n1++;
		}
		else if (idade>28)
		{
			pesofaixa2=pesofaixa2+peso;
			n2++;
		}
		printf("\n");
	}
	printf("A média dos pesos da faixa etária 0 a 18 anos é de: %.2f\n",pesofaixa1/n1);
	printf("A média dos pesos da faixa etária maiores de 18 anos é de: %.2f\n",pesofaixa2/n2);
	getch();
}
