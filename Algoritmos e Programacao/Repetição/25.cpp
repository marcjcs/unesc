/*Elabore um algoritmo que leia o nome, salário e número de filhos de 100 pessoas, e calcule:*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	int i,nfilhos,n1=0,n2=0;
	char nome[30];
	float salario,somasal1=0,somasal2=0,mediasal1,mediasal2;
	for (i=1;i<=100;i++)
	{
		printf("Digite o nome: ");
		fflush(stdin);
		gets(nome);
		printf("Digite o salário: ");
		scanf("%f",&salario);
		printf("Digite o número de filhos: ");
		scanf(" %d",&nfilhos);
		if (nfilhos==1)
		{
			somasal1=somasal1+salario;
			n1++;
		}
		else if (nfilhos==2)
		{
			somasal2=somasal2+salario;
			n2++;
		}
		printf("\n");
	}
	printf("O salário médio das pessoas que possuem 2 filhos é de: %.2f\n",mediasal2=somasal2/n2);
	printf("O salário médio das pessoas que possuem 1 filho é de: %.2f\n",mediasal1=somasal1/n1);
	if (mediasal1>mediasal2)
	{
		printf("A media salarial maior é a de quem tem um filho");
	}
	else
	{
		printf("A média salarial maior é a de quem tem dois filhos");
	}
	getch();
}
