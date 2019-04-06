#include <stdio.h>
int main()
{
	int opcao;
	float salario;

	printf("Menu de opcoes: \n");
	printf("1. Imposto\n");
	printf("2. Novo salario\n");
	printf("3. Classificacao\n");
	printf("Digite a opcao desejada: ");
	do{
		scanf("%d",&opcao);
	}while(opcao<1||opcao>3);
	switch (opcao)
	{
		case 1:
			printf("Salario = ");
			scanf("%f",&salario);
			if (salario<500)
			{
				printf("Imposto: %.2f",salario*0.05);
			}
			if (salario>=500&&salario<=850)
			{
				printf("Imposto: %.2f",salario*0.1);
			}
			if (salario>850)
			{
				printf("Imposto: %.2f",salario*0.15);
			}
			break;
		case 2:
			printf("Salario = ");
			scanf("%f",&salario);
			if (salario>1500)
			{
				printf("Novo salario: %.2f",salario+25);
			}
			if (salario>=750&&salario<=1499.99)
			{
				printf("Novo salario: %.2f",salario+50);
			}
			if (salario>=450&&salario<=749.99)
			{
				printf("Novo salario: %.2f",salario+75);
			}
			if (salario<450)
			{
				printf("Novo salario: ",salario+100);
			}
			break;
		case 3:
			printf("Salario = ");
			scanf("%f",&salario);
			if (salario<=700)
			{
				printf("Mal remunerado");
			}
			if (salario>700)
			{
				printf("Bem remunerado");
			}
			break;
	}
	return 0;
}
