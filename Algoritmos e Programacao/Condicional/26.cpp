/*Elabore um algoritmo que leia o salário de uma pessoa e imprima o desconto do INSS, conforme tabela descrita a seguir:*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	float sal;
	printf("Digite o valor do seu salário: ");
	scanf("%f",&sal);
	if (sal<=600)
	{
		printf("Você está isento do INSS");
	}
	else if (sal>600&&sal<=1200)
	{
		printf("Desconto do INSS: %.2f",sal*20/100);
	}
	else if (sal>1200&&sal<=2000)
	{
		printf("Desconto do INSS: %.2f",sal*25/100);
	}
	else
	{
		printf("Desconto do INSS: %.2f",sal*30/100);
	}
	getch();
}
