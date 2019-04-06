#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	int escolha1,escolha2,idade;
	char nome[30],sexo[20];
	printf("*********DIGITE AS SUAS INFORMAÇÕES COMO PEDE*********\nNome: ");
	gets(nome);
	fflush(stdin);
	printf("Sexo: ");
	scanf("%s",&sexo);
	printf("Idade: ");
	scanf("%d",&idade);
	printf("\nO que você achou do filme?\n(1) Ótimo - (2) Bom - (3) Regular - (4) Ruim - (5) Péssimo\n");
	scanf("%d",&escolha1);
	printf("\nVocê assistiria a uma terceira continuação se houvesse o X-Men 3?\n(1) Sim - (2) Não - (3) Talvez\n");
	scanf("%d",&escolha2);
	switch (escolha1)
	{
		case 1:
			switch (escolha2)
			{
				case 1:
					printf("\nNome: %s\nSexo: %s\nIdade: %d\nO que você achou do filme? Ótimo\nVocê assistiria a uma terceira continuação se houvesse o X-Men 3? Sim",nome,sexo,idade);
					break;
				case 2:
					printf("\nNome: %s\nSexo: %s\nIdade: %d\nO que você achou do filme? Ótimo\nVocê assistiria a uma terceira continuação se houvesse o X-Men 3? Não",nome,sexo,idade);
					break;
				case 3:
					printf("\nNome: %s\nSexo: %s\nIdade: %d\nO que você achou do filme? Ótimo\nVocê assistiria a uma terceira continuação se houvesse o X-Men 3? Talvez",nome,sexo,idade);
					break;
			}
			break;
		case 2:
			switch (escolha2)
			{
				case 1:
					printf("\nNome: %s\nSexo: %s\nIdade: %d\nO que você achou do filme? Bom\nVocê assistiria a uma terceira continuação se houvesse o X-Men 3? Sim",nome,sexo,idade);
					break;
				case 2:
					printf("\nNome: %s\nSexo: %s\nIdade: %d\nO que você achou do filme? Bom\nVocê assistiria a uma terceira continuação se houvesse o X-Men 3? Não",nome,sexo,idade);
					break;
				case 3:
					printf("\nNome: %s\nSexo: %s\nIdade: %d\nO que você achou do filme? Bom\nVocê assistiria a uma terceira continuação se houvesse o X-Men 3? Talvez",nome,sexo,idade);
					break;
			}
			break;
		case 3:
			switch (escolha2)
			{
				case 1:
					printf("\nNome: %s\nSexo: %s\nIdade: %d\nO que você achou do filme? Regular\nVocê assistiria a uma terceira continuação se houvesse o X-Men 3? Sim",nome,sexo,idade);
					break;
				case 2:
					printf("\nNome: %s\nSexo: %s\nIdade: %d\nO que você achou do filme? Regular\nVocê assistiria a uma terceira continuação se houvesse o X-Men 3? Não",nome,sexo,idade);
					break;
				case 3:
					printf("\nNome: %s\nSexo: %s\nIdade: %d\nO que você achou do filme? Regular\nVocê assistiria a uma terceira continuação se houvesse o X-Men 3? Talvez",nome,sexo,idade);
					break;
			}
			break;
		case 4:
			switch (escolha2)
			{
				case 1:
					printf("\nNome: %s\nSexo: %s\nIdade: %d\nO que você achou do filme? Ruim\nVocê assistiria a uma terceira continuação se houvesse o X-Men 3? Sim",nome,sexo,idade);
					break;
				case 2:
					printf("\nNome: %s\nSexo: %s\nIdade: %d\nO que você achou do filme? Ruim\nVocê assistiria a uma terceira continuação se houvesse o X-Men 3? Não",nome,sexo,idade);
					break;
				case 3:
					printf("\nNome: %s\nSexo: %s\nIdade: %d\nO que você achou do filme? Ruim\nVocê assistiria a uma terceira continuação se houvesse o X-Men 3? Talvez",nome,sexo,idade);
					break;
			}
			break;
		case 5:
			switch (escolha2)
			{
				case 1:
					printf("\nNome: %s\nSexo: %s\nIdade: %d\nO que você achou do filme? Péssimo\nVocê assistiria a uma terceira continuação se houvesse o X-Men 3? Sim",nome,sexo,idade);
					break;
				case 2:
					printf("\nNome: %s\nSexo: %s\nIdade: %d\nO que você achou do filme? Péssimo\nVocê assistiria a uma terceira continuação se houvesse o X-Men 3? Não",nome,sexo,idade);
					break;
				case 3:
					printf("\nNome: %s\nSexo: %s\nIdade: %d\nO que você achou do filme? Péssimo\nVocê assistiria a uma terceira continuação se houvesse o X-Men 3? Talvez",nome,sexo,idade);
					break;
			}
			break;
	}
}
