/*Um endocrinologista deseja controlar a saúde de seus pacientes e, 
para isso, utiliza o Índice de Massa Corporal (IMC). Sabendo que o IMC é calculado por meio da seguinte fórmula:
Elabore um algoritmo que leia o nome, o peso e a altura de um paciente, e apresente o nome do paciente e sua faixa de risco, baseando-se na seguinte tabela:*/
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	char nome[30];
	float peso,altura,imc;
	printf("Digite o seu nome: ");
	gets(nome);
	fflush(stdin);
	printf("Digite o seu peso (kg): ");
	scanf("%f",&peso);
	printf("Digite a sua altura (metros): ");
	scanf("%f",&altura);
	imc=peso/(pow(altura,2));
	if (imc<20)
	{
		printf("\nNome: %s\nFaixa de risco: Abaixo do peso",nome);
	}
	else if (imc>=20&&imc<=25)
	{
		printf("\nNome: %s\nFaixa de risco: Normal",nome);
	}
	else if (imc>25&&imc<=30)
	{
		printf("\nNome: %s\nFaixa de risco: Excesso de peso",nome);
	}
	else if (imc>30&&imc<=35)
	{
		printf("\nNome: %s\nFaixa de risco: Obesidade",nome);
	}
	else
	{
		printf("\nNome: %s\nFaixa de risco: Obesidade mórbida",nome);
	}
	getch();
}

