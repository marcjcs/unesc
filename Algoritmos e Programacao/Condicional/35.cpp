#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	int escolha;
	float salario,imposto,novosalario;
	printf("Menu de op��es\n\n1. Imposto\n2. Novo sal�rio\n3. Classifica��o\n\nDigite a op��o desejada: ");
	scanf("%d",&escolha);
	if (escolha==1)
	{
		printf("\nDigite o valor do seu sal�rio: ");
		scanf("%f",&salario);
		if (salario<500)
		{
			imposto=salario*5/100;
			printf("Valor do imposto: %.2f",imposto);
		}
		else if (salario>=500&&salario<=850)
		{
			imposto=salario*10/100;
			printf("Valor do imposto: %.2f",imposto);
		}
		else
		{
			imposto=salario*15/100;
			printf("Valor do imposto: %.2f",imposto);
		}
	}
	else if (escolha==2)
	{
		printf("\nDigite o valor do seu sal�rio: ");
		scanf("%f",&salario);
		if(salario>1500)
		{
			printf("O novo valor do sal�rio �: %.2f",salario-25);
		}
		else if(salario>=700&&salario<=1500)
		{
			printf("O novo valor do sal�rio �: %.2f",salario-50);
		}
		else if (salario>=450&&salario<700)
		{
			printf("O novo valor do sal�rio �: %.2f",salario-75);
		}
		else
		{
			printf("O novo valor do sal�rio �: %.2f",salario-100);
		}
	}
	else if (escolha==3)
	{
		printf("\nDigite o valor do seu sal�rio: ");
		scanf("%f",&salario);
		if (salario<=700)
		{
			printf("A sua classifica��o �: mal remunerado");
		}
		else
		{
			printf("A sua classifica��o �: bem remunerado");
		}
	}
	else
	{
		printf("\nA op��o digitada n�o existe");
	}
	getch ();
}
