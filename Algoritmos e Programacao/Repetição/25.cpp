/*Elabore um algoritmo que leia o nome, sal�rio e n�mero de filhos de 100 pessoas, e calcule:*/
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
		printf("Digite o sal�rio: ");
		scanf("%f",&salario);
		printf("Digite o n�mero de filhos: ");
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
	printf("O sal�rio m�dio das pessoas que possuem 2 filhos � de: %.2f\n",mediasal2=somasal2/n2);
	printf("O sal�rio m�dio das pessoas que possuem 1 filho � de: %.2f\n",mediasal1=somasal1/n1);
	if (mediasal1>mediasal2)
	{
		printf("A media salarial maior � a de quem tem um filho");
	}
	else
	{
		printf("A m�dia salarial maior � a de quem tem dois filhos");
	}
	getch();
}
