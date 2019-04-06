/*Elabore um algoritmo que leia o código de um determinado produto e mostre a sua classificação. Utilize a seguinte tabela como referência:*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	int escolha;
	printf("Digite o código do produto: ");
	scanf("%d",&escolha);
	switch (escolha)
	{
		case 1:
			printf("Alimento não perecível");
			break;
		case 2:
		case 3:
		case 4:
			printf("Alimento perecível");
			break;
		case 5:
		case 6:
			printf("Vestuário");
			break;
		case 7:
			printf("Higiene pessoal");
			break;
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
			printf("Limpeza e utensílios domésticos");
			break;
		default:
			printf("Incorreto");
	}
	getch();
}
