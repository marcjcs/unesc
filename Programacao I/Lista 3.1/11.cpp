#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main ()
{
	char string[51];
	gets(string);
	string[0]=toupper(string[0]);
	for (int i=0; i<strlen(string); i++)
	{
		if (isspace(string[i]))
		{
			string[i+1]=toupper(string[i+1]);
		}
	}
	printf("%s\n",string);
	system("pause");
	return 0;
}
