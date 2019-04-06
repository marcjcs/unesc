/*Elabore um algoritmo que leia um número inteiro entre 1 e 12 e imprima o mês correspondente. Caso seja digitado um valor fora desse intervalo, 
deverá ser exibida uma mensagem informando que não existe mês com esse número.
OBS: Para a resolução desse exercício utilize SE´s encadeados, e desenvolva uma 2ª solução utilizando o comando CASO.*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	int num;
	printf("Digite um número inteiro: ");
	scanf("%d",&num);
//Método por if e else
/*	if (num==1)
	{
		printf("O mês correspondente ao número digitado é janeiro");
	}
	else if (num==2)
	{
		printf("O mês correspondente ao número digitado é fevereiro");
	}
	else if (num==3)
	{
		printf("O mês correspondente ao número digitado é março");
	}
	else if (num==4)
	{
		printf("O mês correspondente ao número digitado é abril");
	}
	else if (num==5)
	{
		printf("O mês correspondente ao número digitado é maio");
	}
	else if (num==6)
	{
		printf("O mês correspondente ao número digitado é junho");
	}
	else if (num==7)
	{
		printf("O mês correspondente ao número digitado é julho");
	}
	else if (num==8)
	{
		printf("O mês correspondente ao número digitado é agosto");
	}
	else if (num==9)
	{
		printf("O mês correspondente ao número digitado é setembro");
	}
	else if (num==10)
	{
		printf("O mês correspondente ao número digitado é outubro");
	}
	else if (num==11)
	{
		printf("O mês correspondente ao número digitado é novembro");
	}
	else if (num==12)
	{
		printf("O mês correspondente ao número digitado é dezembro");
	}
	else
	{
		printf("Não existe um mês correspondente ao número digitado");
	}*/
//Método por case
	switch (num)
	{
		case 1 :
			printf("O mês correspondente ao número digitado é janeiro");
		break;
		
		case 2 :
			printf("O mês correspondente ao número digitado é fevereiro");
		break;
		
		case 3 :
			printf("O mês correspondente ao número digitado é março");
		break;
		
		case 4 :
			printf("O mês correspondente ao número digitado é abril");
		break;
		
		case 5 :
			printf("O mês correspondente ao número digitado é maio");
		break;
		
		case 6 :
			printf("O mês correspondente ao número digitado é junho");
		break;
		
		case 7 :
			printf("O mês correspondente ao número digitado é julho");
		break;
		
		case 8 :
			printf("O mês correspondente ao número digitado é agosto");
		break;
		
		case 9 :
			printf("O mês correspondente ao número digitado é setembro");
		break;
		
		case 10 :
			printf("O mês correspondente ao número digitado é outubro");
		break;
		
		case 11 :
			printf("O mês correspondente ao número digitado é novembro");
		break;
		
		case 12 :
			printf("O mês correspondente ao número digitado é dezembro");
		break;
		
		default : 
			printf("Não existe um mês correspondente ao número digitado");
	}
	getch ();
}
