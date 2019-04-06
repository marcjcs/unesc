#include <stdio.h>
int main()
{
	int contador=0;
	for (int i=250; i<=500; i++)
	{
		if (i%2!=0)
		{
			printf("%d\n",i);
			contador+=i;
		}
	}
	printf("%d\n",contador);
	return 0;
}
