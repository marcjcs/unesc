#include <stdio.h>

int somaEntreNumeros(int numero1, int numero2);

int main()
{
	int num[2];
	scanf("%d %d",&num[0],&num[1]);
	printf("%d",somaEntreNumeros(num[0],num[1]));
	return 0;
}

int somaEntreNumeros(int numero1, int numero2)
{
	int soma=0;
	for (int i=numero1+1; i<numero2; i++)
	{
		soma+=i;
	}
	return soma;
}
