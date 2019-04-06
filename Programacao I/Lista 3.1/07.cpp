#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main ()
{
	char string[51];
	int qtd=0;
	gets(string);
	for (int i=0; string[i]!='\0'; i++)
	{
		/*if (isspace(string[i])) //caso espaco nao seja contado como caractere
		{
			continue;
		}*/
		qtd++;
	}
	printf("%d\n",qtd);
	system("pause");
	return 0;
}
