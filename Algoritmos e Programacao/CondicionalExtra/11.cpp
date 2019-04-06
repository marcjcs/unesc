#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	int pedido,qtd;
	printf("Especificação                    Preço unitário\n100 Cachorro quente                 1,10\n101 Bauru simples                   1,30\n102 Bauru c/ ovo                    1,50");
	printf("\n103 Hamburger                       1,10\n104 Cheeseburger                    1,30\n105 Refrigerante                    1,00");
	printf("\n\nDigite o número do item a pedir: ");
	scanf("%d",&pedido);
	printf("Digite a quantidade: ");
	scanf("%d",&qtd);
	switch(pedido)
	{
		case 100:
			printf("\nO valor a ser pago pelo lanche é de: %.2f reais",qtd*1.10);
			break;
		case 101:
			printf("\nO valor a ser pago pelo lanche é de: %.2f reais",qtd*1.30);
			break;
		case 102:
			printf("\nO valor a ser pago pelo lanche é de: %.2f reais",qtd*1.50);
			break;
		case 103:
			printf("\nO valor a ser pago pelo lanche é de: %.2f reais",qtd*1.10);
			break;
		case 104:
			printf("\nO valor a ser pago pelo lanche é de: %.2f reais",qtd*1.30);
			break;
		case 105:
			printf("\nO valor a ser pago pelo lanche é de: %.2f reais",qtd*1.00);
			break;
		default:
			printf("\nNúmero digitado não existe");
	}
	getch();
}
