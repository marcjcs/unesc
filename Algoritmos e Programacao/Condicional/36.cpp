/*Elabore um algoritmo que receba o c�digo correspondente ao cargo de um funcion�rio, seu sal�rio atual, 
e imprima o cargo, o valor do aumento e o novo sal�rio do funcion�rio. Os cargos est�o na tabela a seguir:*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	int escolha;
	float salario,valoraumento,novosal;
	repeat:
	printf("CARGOS\n\n1. Escritu�rio\n2. Secret�rio\n3. Caixa\n4. Gerente\n5. Diretor\n\nDigite o c�digo correspondente ao cargo do funcion�rio: ");
	scanf("%d",&escolha);
	printf("\nDigite o sal�rio atual do funcion�rio: ");
	scanf("%f",&salario);
	switch (escolha)
	{
		case 1:
			valoraumento=salario*50/100;
			novosal=salario+valoraumento;
			printf("\nCargo: Escritu�rio\nValor do aumento: %.2f\nNovo sal�rio: %.2f",valoraumento,novosal);
			break;
		case 2:
			valoraumento=salario*35/100;
			novosal=salario+valoraumento;
			printf("\nCargo: Secret�rio\nValor do aumento: %.2f\nNovo sal�rio: %.2f",valoraumento,novosal);
			break;
		case 3:
			valoraumento=salario*20/100;
			novosal=salario+valoraumento;
			printf("\nCargo: Caixa\nValor do aumento: %.2f\nNovo sal�rio: %.2f",valoraumento,novosal);
			break;
		case 4:
			valoraumento=salario*10/100;
			novosal=salario+valoraumento;
			printf("\nCargo: Gerente\nValor do aumento: %.2f\nNovo sal�rio: %.2f",valoraumento,novosal);
			break;
		case 5:
			printf("\nCargo: Diretor\nN�o h� aumento de sal�rio para esta op��o");
			break;
		default:
			printf("\nO cargo digitado n�o existe\n\n");
			goto repeat;
			break;
	}
	getch();
}
