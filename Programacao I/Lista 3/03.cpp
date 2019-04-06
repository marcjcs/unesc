/*Escreva um programa que leia uma string, conte quantos caracteres desta string são iguais a 'a' e substitua os que forem 
iguais a 'a' por 'b'. O programa deve imprimir o número de caracteres modificados e a string modificada.*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
	char frase[31];
	int tamanho, qtd=0;
	fgets(frase,sizeof(frase),stdin);
	tamanho = strlen(frase);
	for (int i=0; i<tamanho; i++)
	{
		if (frase[i]=='a')
		{
			frase[i]='b';
			qtd++;
		}
	}
	printf("%d\n%s",qtd,frase);
	return 0;
}
