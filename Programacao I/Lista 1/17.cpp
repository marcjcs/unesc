#include <stdio.h>
int main()
{
	int contador=0, numero;
	scanf("%d",&numero);
	while (numero>0)
	{
		contador++;
		scanf("%d",&numero);
	}
	printf("%d",contador);
	return 0;
}
