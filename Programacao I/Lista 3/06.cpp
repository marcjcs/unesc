/*
*************************************************************************
*
*	Programa que lê duas strings e as intercala.
* 
*************************************************************************
*
* Autor: Marcos Junior
*
* Alteração:
* Data: 03/08/2018
*************************************************************************
*
* Copyright 2018
*
*************************************************************************
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
	int tamanho1, tamanho2, tamanhofinal;
	char frase1[51], frase2[51];
	gets(frase1);
	gets(frase2);
	tamanho1 = strlen(frase1);
	tamanho2 = strlen(frase2);
	tamanhofinal = tamanho1+tamanho2;
	char frasefinal[101];
	frasefinal[0]=frase1[0];
	frasefinal[1]=frase2[0];
	for (int i=1; i<tamanhofinal; i++)
	{
		frasefinal[i*2]=frase1[i];
		frasefinal[i*2+1]=frase2[i];
	}
	printf("%s",frasefinal);
	return 0;
}
