#include <stdio.h>

int multiplicacao(int a, int b);

int main()
{
	int num[2];
	scanf("%d %d",&num[0],&num[1]);
	printf("%d",multiplicacao(num[0],num[1]));
	return 0;
}

int multiplicacao(int a, int b)
{
	return a*b;
}
