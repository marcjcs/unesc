/*Elabore um algoritmo que leia o c�digo de um determinado produto e mostre a sua classifica��o. Utilize a seguinte tabela como refer�ncia:*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	int escolha;
	printf("Digite o c�digo do produto: ");
	scanf("%d",&escolha);
	switch (escolha)
	{
		case 1:
			printf("Alimento n�o perec�vel");
			break;
		case 2:
		case 3:
		case 4:
			printf("Alimento perec�vel");
			break;
		case 5:
		case 6:
			printf("Vestu�rio");
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
			printf("Limpeza e utens�lios dom�sticos");
			break;
		default:
			printf("Incorreto");
	}
	getch();
}
