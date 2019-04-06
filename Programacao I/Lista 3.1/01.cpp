#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
	char sentence[51];
	int count=1;
	//Para usar o fgets, nao da pra usar isspace, entao fiz dos dois jeitos
	//gets(sentence);
	fgets(sentence,sizeof(sentence),stdin);
	/*for (int i=0; i<strlen(sentence); i++)
	{
		if (isspace(sentence[i]))
		{
			count++;
		}
	}

	for (int i=0; i<strlen(sentence);i++)
	{
		if (isspace(sentence[i])&&isspace(sentence[i+2]))
		{
			count--;
		}
		if (i==0&&isspace(sentence[i+1]))
		{
			count--;
		}
	}*/

	for (int i=0; i<strlen(sentence); i++)
	{
		if (sentence[i]==' ')
		{
			count++;
		}
	}

	for (int i=0; i<strlen(sentence);i++)
	{
		if (sentence[i]==' '&&sentence[i+2]==' ')
		{
			count--;
		}
		if (i==0&&sentence[i+1]==' ')
		{
			count--;
		}
		if (i==strlen(sentence)-1&&sentence[i-1]==' ')
		{
			count--;
		}
	}

	printf("%d\n",count);
	system("pause");
	return 0;
}
