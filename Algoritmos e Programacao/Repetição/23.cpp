/*Elabore um algoritmo que leia o nome e salário bruto de 10 pessoas. Para cada pessoa, imprimir o nome e o
valor da alíquota de IR, conforme tabela abaixo:*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	int i;
	char nome[30];
	float salario;
	for (i=1;i<=10;i++)
	{
		printf("Digite o seu nome: ");
		fflush(stdin);
		gets(nome);
		printf("Digite o valor do seu salário: ");
		scanf("%f",&salario);
		if (salario<600)
		{
			printf("\nNome: %s\nSalário: %.2f\nValor da alíquota de IR: Isento\n\n",nome,salario);
		}
		else if (salario<1500&&salario>=600)
		{
			printf("\nNome: %s\nSalário: %.2f\nValor da alíquota de IR: %.2f\n\n",nome,salario,(salario*10)/100);
		}
		else 
		{
			printf("\nNome: %s\nSalário: %.2f\nValor da alíquota de IR: %.2f\n\n",nome,salario,(salario*15)/100);
		}
	}
}
