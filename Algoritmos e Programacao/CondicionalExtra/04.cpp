//Faça um algoritmo que leia quatro números (Opção , Num1 , Num2 e Num3) e que mostre o valor de Num1 se 0pção for igual a 2 , o valor de Num2 se Opção igual a 
//3 ,e o valor de Num3 se Opção for igual a 4 . Os únicos valores possíveis para a variável Opção são 2, 3 e 4.
#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	int opcao,num[2];
	printf("Digite o número opção (2 a 4): ");
	scanf("%d",&opcao);
	while (opcao!=2&&opcao!=3&&opcao!=3)
	{
		printf("Valor inválido\n");
		printf("\nDigite o número opção de novo: ");
		scanf("%d",&opcao);
	}
	printf("Digite o valor do segundo número: ");
	scanf("%d",&num[0]);
	printf("Digite o valor do terceiro número: ");
	scanf("%d",&num[1]);
	printf("Digite o valor do quarto número: ");
	scanf("%d",&num[2]);
	switch (opcao)
	{
		case 2:
			printf("\n%d",num[0]);
			break;
		case 3:
			printf("\n%d",num[1]);
			break;
		case 4:
			printf("\n%d",num[2]);
			break;
		default:
			printf("\nNúmero opção inválido");
	}
	getch();
}
