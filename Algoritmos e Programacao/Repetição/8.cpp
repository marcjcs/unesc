/*Elabore um algoritmo que leia o nome, idade e sexo de 20 pessoas. A cada leitura, imprima o nome, se a
pessoa for do sexo masculino, e tiver mais de 21 anos.*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	int i,idade;
	char nome[100],sexo;
	for (i=1;i<=20;i++)
	{
		printf("Digite o seu nome: ");
		fflush(stdin);
		gets(nome);
		printf("Digite a sua idade: ");
		scanf("%d",&idade);
		printf("Digite a letra correspondente ao seu sexo: m (masculino) - f (feminino)\n");
		scanf(" %c",&sexo);
		switch (sexo)
		{
			case 'm':
				if (idade>21)
				{
					printf("%s\n",nome);
				}
				break;
			case 'f':
				break;
		}
	}
	getch();
}
