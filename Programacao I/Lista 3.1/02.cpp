#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#define vogal '*'
int main()
{
	char string[51];
	gets(string);
	for (int i=0; i<=strlen(string); i++)
	{
		if (toupper(string[i])=='A'||
			toupper(string[i])=='E'||
			toupper(string[i])=='I'||
			toupper(string[i])=='O'||
			toupper(string[i])=='U')
			string[i]=vogal;
	}
	printf("%s\n",string);
	system("pause");
	return 0;
}
