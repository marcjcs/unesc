#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
	char string[51];
	char alfabeto[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	int contador[26]={0};
	gets(string);
	for (int i=0; i<strlen(string); i++)
	{
		for (int j=0; j<26; j++)
		{
			if (tolower(string[i])==alfabeto[j])
			{
				contador[j]++;
			}
		}
	}
	for (int i=0; i<26; i++)
	{
		if (contador[i]==0||contador[i]==1)
			continue;
		else
		{
			printf("\nA letra %c apareceu %d vezes",toupper(alfabeto[i]),contador[i]);
		}
	}
	printf("\n");
	system("pause");
	return 0;
}
