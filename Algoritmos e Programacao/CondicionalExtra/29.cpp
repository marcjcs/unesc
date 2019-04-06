/*Escrever um algoritmo para uma empresa que decide dar um reajuste a seus
funcionários com os seguintes critérios:
A)50% para os funcionários que ganham menos de 3 salários mínimos;
B)20% para aqueles que ganham entre 3 e 10;
C)15% para aqueles que ganham entre 10 e 20;
D)10% para os demais funcionários.
Leia o nome do funcionário, seu salário e o valor do salário mínimo. Calcule o seu novo salário
reajustado. escrever o nome do funcionário, o reajuste e seu novo salário.*/
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
	printf("Digite o seu salário: ");
	scanf("%f",&salario);
	printf("Digite o valor do salário mínimo: ");
	scanf("%f",&salariomin);
	if (salario<salariomin*3)
	{
		printf("\nNome: %s\nReajuste: %.2f\nNovo salário: %.2f",nome,salario*50/100,(salario*50/100)+salario);
	}
	else if (salario>=salariomin*3&&salario<=salariomin*10)
	{
		printf("\nNome: %s\nReajuste: %.2f\nNovo salário: %.2f",nome,salario*20/100,(salario*20/100)+salario);
	}
	else if (salario>salariomin*10&&salario<=salariomin*20)
	{
		printf("\nNome: %s\nReajuste: %.2f\nNovo salário: %.2f",nome,salario*15/100,(salario*15/100)+salario);
	}
	else
	{
		printf("\nNome: %s\nReajuste: %.2f\nNovo salário: %.2f",nome,salario*10/100,(salario*10/100)+salario);
	}
	getch();
}
