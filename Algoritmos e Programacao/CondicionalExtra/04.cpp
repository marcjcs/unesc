//Fa�a um algoritmo que leia quatro n�meros (Op��o , Num1 , Num2 e Num3) e que mostre o valor de Num1 se 0p��o for igual a 2 , o valor de Num2 se Op��o igual a 
//3 ,e o valor de Num3 se Op��o for igual a 4 . Os �nicos valores poss�veis para a vari�vel Op��o s�o 2, 3 e 4.
#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	int opcao,num[2];
	printf("Digite o n�mero op��o (2 a 4): ");
	scanf("%d",&opcao);
	while (opcao!=2&&opcao!=3&&opcao!=3)
	{
		printf("Valor inv�lido\n");
		printf("\nDigite o n�mero op��o de novo: ");
		scanf("%d",&opcao);
	}
	printf("Digite o valor do segundo n�mero: ");
	scanf("%d",&num[0]);
	printf("Digite o valor do terceiro n�mero: ");
	scanf("%d",&num[1]);
	printf("Digite o valor do quarto n�mero: ");
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
			printf("\nN�mero op��o inv�lido");
	}
	getch();
}
