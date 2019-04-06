#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main ()
{
	char string[51];
	fgets(string,sizeof(string),stdin);
	for (int i=0; i<strlen(string); i++)
	{
		if (isspace(string[i]))
		{
			string[i]='\n';
		}
	}
	puts(string);
	system("pause");
	return 0;
}
