/*Escrever um algoritmo para uma empresa que decide dar um reajuste a seus
funcion�rios com os seguintes crit�rios:
A)50% para os funcion�rios que ganham menos de 3 sal�rios m�nimos;
B)20% para aqueles que ganham entre 3 e 10;
C)15% para aqueles que ganham entre 10 e 20;
D)10% para os demais funcion�rios.
Leia o nome do funcion�rio, seu sal�rio e o valor do sal�rio m�nimo. Calcule o seu novo sal�rio
reajustado. escrever o nome do funcion�rio, o reajuste e seu novo sal�rio.*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	char nome[20];
	float salario,salariomin;
	printf("Digite o seu nome: ");
	gets(nome);
	fflush(stdin);
	printf("Digite o seu sal�rio: ");
	scanf("%f",&salario);
	printf("Digite o valor do sal�rio m�nimo: ");
	scanf("%f",&salariomin);
	if (salario<salariomin*3)
	{
		printf("\nNome: %s\nReajuste: %.2f\nNovo sal�rio: %.2f",nome,salario*50/100,(salario*50/100)+salario);
	}
	else if (salario>=salariomin*3&&salario<=salariomin*10)
	{
		printf("\nNome: %s\nReajuste: %.2f\nNovo sal�rio: %.2f",nome,salario*20/100,(salario*20/100)+salario);
	}
	else if (salario>salariomin*10&&salario<=salariomin*20)
	{
		printf("\nNome: %s\nReajuste: %.2f\nNovo sal�rio: %.2f",nome,salario*15/100,(salario*15/100)+salario);
	}
	else
	{
		printf("\nNome: %s\nReajuste: %.2f\nNovo sal�rio: %.2f",nome,salario*10/100,(salario*10/100)+salario);
	}
	getch();
}
