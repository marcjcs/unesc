//Faça um programa que recebe uma frase, calcule e mostre a quantidade de letras 'x' da frase digitada.
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
	char frase[31];
	int qtd=0, tamanho;
	fgets(frase,sizeof(frase),stdin);
	tamanho = strlen(frase);
	for (int i=0; i<tamanho; i++)
	{
		if (frase[i]=='x')
		{
			qtd++;
		}
	}
	printf("%d",qtd);
	return 0;
}
