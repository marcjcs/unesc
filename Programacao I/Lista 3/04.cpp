/*Desenvolva um programa para ler uma string. Modifique a string de modo que o primeiro caracter 
passe para a última posição e desloque todos os outros caracteres uma posição para a esquerda. Imprima a string modificada.*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
	char frase[31], aux;
	int tamanho, i;
	gets(frase);
	tamanho = strlen(frase);
	aux=frase[0];
	for (i=0; i<tamanho-1; i++)
	{
		frase[i]=frase[i+1];
	}
	frase[i]=aux;
	printf("%s",frase);
	return 0;
}


