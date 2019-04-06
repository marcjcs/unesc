#include <stdio.h>

void tabela(int numero);

int main()
{
	int n;
	scanf("%d",&n);
	tabela(n);
	return 0;
}

void tabela(int numero)
{
	for (int i=1; i<=numero; i++)
	{
		for (int j=1; j<=i; j++)
		{
			printf("%d ",j*i);
		}
		printf("\n");
	}
}
