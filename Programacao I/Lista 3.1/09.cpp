#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main ()
{
	char string[51];
	int qtd=0;
	gets(string);
	for (int i=0; i<strlen(string); i++)
	{
		if (isspace(string[i]))
			continue;
		if (tolower(string[i]!='a')&&
			tolower(string[i]!='e')&&
			tolower(string[i]!='i')&&
			tolower(string[i]!='o')&&
			tolower(string[i]!='u'))
		{
			qtd++;
		}
	}
	printf("%d\n",qtd);
	system("pause");
	return 0;
}
