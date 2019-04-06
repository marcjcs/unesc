#include <stdio.h>
#include <stdlib.h>
main ()
{
	int i,n;
	printf("Digite um numero menor que 1000: ");
	scanf("%d",&n);
	printf("\nNumeros impares maiores que %d e menores que 1000:\n",n);
	for (i=n;i<1000;i++)
	{
		if (i%2!=0&&i!=n)
		{
			printf("%d\n",i);		
		}	
	}
	system("pause");
	return 0;
}
