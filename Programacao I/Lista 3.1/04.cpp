#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char string[2][51];
	int tamanho[2], tamanhofinal=0;
	
	for (int i=0; i<=1; i++)
		gets(string[i]);
	
	for (int i=0; i<=1; i++)
	{
		tamanho[i]=strlen(string[i]);
		tamanhofinal+=tamanho[i];
	}
	
	char stringfinal[tamanhofinal];
	
	strcpy(stringfinal,string[0]);
	strcat(stringfinal,string[1]);
	
	puts(stringfinal);

	system("pause");
	return 0;
}
