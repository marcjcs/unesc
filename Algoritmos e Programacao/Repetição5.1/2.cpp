#include <stdio.h>
#include <stdlib.h>
main ()
{
	int i,n,primeiroelemento;
	printf("Digite o primeiro elemento de uma progressao aritmetica: ");
	scanf("%d",&primeiroelemento);
	printf("Digite a razao da PA: ");
	scanf("%d",&n);
	for (i=1;i<=10;i++)
	{
		printf("%d\n",primeiroelemento+(n*i));
	}
	system("pause");
	return 0;
}
