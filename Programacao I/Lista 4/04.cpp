#include <stdio.h>

int somaEntreNumeros(int a, int b, int c);

int main()
{
	int num[3];
	scanf("%d %d %d",&num[0],&num[1],&num[2]);
	printf("%d",somaEntreNumeros(num[0],num[1], num[2]));
	return 0;
}

int somaEntreNumeros(int a, int b, int c)
{
	int soma=0;
	for (int i=b; i<=c; i++)
	{
		if (i%a==0)
			soma+=i;
	}
	return soma;
}
