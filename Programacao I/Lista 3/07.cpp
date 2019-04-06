#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
	char string[51];
	int tamanho, qtdchar=0;
	gets(string);
	tamanho = strlen(string);
	for (int i=0; i<tamanho; i++)
	{
		if (isspace(string[i]))
			continue;
		if (string[i]!='\0')
		{
			qtdchar++;
		}
	}
	printf("%d",qtdchar);
	return 0;
}
