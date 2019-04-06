#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char string[51], aux;
	int tamanho, i;
	gets(string);
	tamanho = strlen(string);
	for (i=0; i<tamanho/2; i++)
	{
		aux=string[tamanho-1-i];
		string[tamanho-1-i]=string[i];
		string[i]=aux;
	}
	printf("%s\n",string);
	system("pause");
	return 0;
}
