/*Elabore um algoritmo que receba o código correspondente ao cargo de um funcionário, seu salário atual, 
e imprima o cargo, o valor do aumento e o novo salário do funcionário. Os cargos estão na tabela a seguir:*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	int escolha;
	float salario,valoraumento,novosal;
	repeat:
	printf("CARGOS\n\n1. Escrituário\n2. Secretário\n3. Caixa\n4. Gerente\n5. Diretor\n\nDigite o código correspondente ao cargo do funcionário: ");
	scanf("%d",&escolha);
	printf("\nDigite o salário atual do funcionário: ");
	scanf("%f",&salario);
	switch (escolha)
	{
		case 1:
			valoraumento=salario*50/100;
			novosal=salario+valoraumento;
			printf("\nCargo: Escrituário\nValor do aumento: %.2f\nNovo salário: %.2f",valoraumento,novosal);
			break;
		case 2:
			valoraumento=salario*35/100;
			novosal=salario+valoraumento;
			printf("\nCargo: Secretário\nValor do aumento: %.2f\nNovo salário: %.2f",valoraumento,novosal);
			break;
		case 3:
			valoraumento=salario*20/100;
			novosal=salario+valoraumento;
			printf("\nCargo: Caixa\nValor do aumento: %.2f\nNovo salário: %.2f",valoraumento,novosal);
			break;
		case 4:
			valoraumento=salario*10/100;
			novosal=salario+valoraumento;
			printf("\nCargo: Gerente\nValor do aumento: %.2f\nNovo salário: %.2f",valoraumento,novosal);
			break;
		case 5:
			printf("\nCargo: Diretor\nNão há aumento de salário para esta opção");
			break;
		default:
			printf("\nO cargo digitado não existe\n\n");
			goto repeat;
			break;
	}
	getch();
}
