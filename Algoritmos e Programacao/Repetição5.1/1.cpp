#include <stdio.h>
#include <stdlib.h>
int fatorial(int n)
{
	if (n>1)
	{
		return n*fatorial(n-1);
	}
	else
	{
		return 1;
	}
}
main()
{
	int numero;
	printf("Digite um numero: ");
	scanf("%d",&numero);
	printf("Fatorial de %d: %d\n",numero,fatorial(numero));
	system("pause");
	return 0;
}
