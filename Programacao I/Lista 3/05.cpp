//Escreva um programa que leia uma frase e conte quantas palavras existem na frase lida.
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
	char frase[31];
	int tamanho, qtd=1;
	gets(frase);
	tamanho = strlen(frase);
	for (int i=0; i<tamanho; i++)
	{
		if (isspace(frase[i]))
		{
			qtd++;
		}
	}
	printf("%d",qtd);
	return 0;
}
