/*Elabore um algoritmo que leia um n�mero inteiro entre 1 e 12 e imprima o m�s correspondente. Caso seja digitado um valor fora desse intervalo, 
dever� ser exibida uma mensagem informando que n�o existe m�s com esse n�mero.
OBS: Para a resolu��o desse exerc�cio utilize SE�s encadeados, e desenvolva uma 2� solu��o utilizando o comando CASO.*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	int num;
	printf("Digite um n�mero inteiro: ");
	scanf("%d",&num);
//M�todo por if e else
/*	if (num==1)
	{
		printf("O m�s correspondente ao n�mero digitado � janeiro");
	}
	else if (num==2)
	{
		printf("O m�s correspondente ao n�mero digitado � fevereiro");
	}
	else if (num==3)
	{
		printf("O m�s correspondente ao n�mero digitado � mar�o");
	}
	else if (num==4)
	{
		printf("O m�s correspondente ao n�mero digitado � abril");
	}
	else if (num==5)
	{
		printf("O m�s correspondente ao n�mero digitado � maio");
	}
	else if (num==6)
	{
		printf("O m�s correspondente ao n�mero digitado � junho");
	}
	else if (num==7)
	{
		printf("O m�s correspondente ao n�mero digitado � julho");
	}
	else if (num==8)
	{
		printf("O m�s correspondente ao n�mero digitado � agosto");
	}
	else if (num==9)
	{
		printf("O m�s correspondente ao n�mero digitado � setembro");
	}
	else if (num==10)
	{
		printf("O m�s correspondente ao n�mero digitado � outubro");
	}
	else if (num==11)
	{
		printf("O m�s correspondente ao n�mero digitado � novembro");
	}
	else if (num==12)
	{
		printf("O m�s correspondente ao n�mero digitado � dezembro");
	}
	else
	{
		printf("N�o existe um m�s correspondente ao n�mero digitado");
	}*/
//M�todo por case
	switch (num)
	{
		case 1 :
			printf("O m�s correspondente ao n�mero digitado � janeiro");
		break;
		
		case 2 :
			printf("O m�s correspondente ao n�mero digitado � fevereiro");
		break;
		
		case 3 :
			printf("O m�s correspondente ao n�mero digitado � mar�o");
		break;
		
		case 4 :
			printf("O m�s correspondente ao n�mero digitado � abril");
		break;
		
		case 5 :
			printf("O m�s correspondente ao n�mero digitado � maio");
		break;
		
		case 6 :
			printf("O m�s correspondente ao n�mero digitado � junho");
		break;
		
		case 7 :
			printf("O m�s correspondente ao n�mero digitado � julho");
		break;
		
		case 8 :
			printf("O m�s correspondente ao n�mero digitado � agosto");
		break;
		
		case 9 :
			printf("O m�s correspondente ao n�mero digitado � setembro");
		break;
		
		case 10 :
			printf("O m�s correspondente ao n�mero digitado � outubro");
		break;
		
		case 11 :
			printf("O m�s correspondente ao n�mero digitado � novembro");
		break;
		
		case 12 :
			printf("O m�s correspondente ao n�mero digitado � dezembro");
		break;
		
		default : 
			printf("N�o existe um m�s correspondente ao n�mero digitado");
	}
	getch ();
}
