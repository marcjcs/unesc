#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	int escolha1,escolha2,idade;
	char nome[30],sexo[20];
	printf("*********DIGITE AS SUAS INFORMA��ES COMO PEDE*********\nNome: ");
	gets(nome);
	fflush(stdin);
	printf("Sexo: ");
	scanf("%s",&sexo);
	printf("Idade: ");
	scanf("%d",&idade);
	printf("\nO que voc� achou do filme?\n(1) �timo - (2) Bom - (3) Regular - (4) Ruim - (5) P�ssimo\n");
	scanf("%d",&escolha1);
	printf("\nVoc� assistiria a uma terceira continua��o se houvesse o X-Men 3?\n(1) Sim - (2) N�o - (3) Talvez\n");
	scanf("%d",&escolha2);
	switch (escolha1)
	{
		case 1:
			switch (escolha2)
			{
				case 1:
					printf("\nNome: %s\nSexo: %s\nIdade: %d\nO que voc� achou do filme? �timo\nVoc� assistiria a uma terceira continua��o se houvesse o X-Men 3? Sim",nome,sexo,idade);
					break;
				case 2:
					printf("\nNome: %s\nSexo: %s\nIdade: %d\nO que voc� achou do filme? �timo\nVoc� assistiria a uma terceira continua��o se houvesse o X-Men 3? N�o",nome,sexo,idade);
					break;
				case 3:
					printf("\nNome: %s\nSexo: %s\nIdade: %d\nO que voc� achou do filme? �timo\nVoc� assistiria a uma terceira continua��o se houvesse o X-Men 3? Talvez",nome,sexo,idade);
					break;
			}
			break;
		case 2:
			switch (escolha2)
			{
				case 1:
					printf("\nNome: %s\nSexo: %s\nIdade: %d\nO que voc� achou do filme? Bom\nVoc� assistiria a uma terceira continua��o se houvesse o X-Men 3? Sim",nome,sexo,idade);
					break;
				case 2:
					printf("\nNome: %s\nSexo: %s\nIdade: %d\nO que voc� achou do filme? Bom\nVoc� assistiria a uma terceira continua��o se houvesse o X-Men 3? N�o",nome,sexo,idade);
					break;
				case 3:
					printf("\nNome: %s\nSexo: %s\nIdade: %d\nO que voc� achou do filme? Bom\nVoc� assistiria a uma terceira continua��o se houvesse o X-Men 3? Talvez",nome,sexo,idade);
					break;
			}
			break;
		case 3:
			switch (escolha2)
			{
				case 1:
					printf("\nNome: %s\nSexo: %s\nIdade: %d\nO que voc� achou do filme? Regular\nVoc� assistiria a uma terceira continua��o se houvesse o X-Men 3? Sim",nome,sexo,idade);
					break;
				case 2:
					printf("\nNome: %s\nSexo: %s\nIdade: %d\nO que voc� achou do filme? Regular\nVoc� assistiria a uma terceira continua��o se houvesse o X-Men 3? N�o",nome,sexo,idade);
					break;
				case 3:
					printf("\nNome: %s\nSexo: %s\nIdade: %d\nO que voc� achou do filme? Regular\nVoc� assistiria a uma terceira continua��o se houvesse o X-Men 3? Talvez",nome,sexo,idade);
					break;
			}
			break;
		case 4:
			switch (escolha2)
			{
				case 1:
					printf("\nNome: %s\nSexo: %s\nIdade: %d\nO que voc� achou do filme? Ruim\nVoc� assistiria a uma terceira continua��o se houvesse o X-Men 3? Sim",nome,sexo,idade);
					break;
				case 2:
					printf("\nNome: %s\nSexo: %s\nIdade: %d\nO que voc� achou do filme? Ruim\nVoc� assistiria a uma terceira continua��o se houvesse o X-Men 3? N�o",nome,sexo,idade);
					break;
				case 3:
					printf("\nNome: %s\nSexo: %s\nIdade: %d\nO que voc� achou do filme? Ruim\nVoc� assistiria a uma terceira continua��o se houvesse o X-Men 3? Talvez",nome,sexo,idade);
					break;
			}
			break;
		case 5:
			switch (escolha2)
			{
				case 1:
					printf("\nNome: %s\nSexo: %s\nIdade: %d\nO que voc� achou do filme? P�ssimo\nVoc� assistiria a uma terceira continua��o se houvesse o X-Men 3? Sim",nome,sexo,idade);
					break;
				case 2:
					printf("\nNome: %s\nSexo: %s\nIdade: %d\nO que voc� achou do filme? P�ssimo\nVoc� assistiria a uma terceira continua��o se houvesse o X-Men 3? N�o",nome,sexo,idade);
					break;
				case 3:
					printf("\nNome: %s\nSexo: %s\nIdade: %d\nO que voc� achou do filme? P�ssimo\nVoc� assistiria a uma terceira continua��o se houvesse o X-Men 3? Talvez",nome,sexo,idade);
					break;
			}
			break;
	}
}
