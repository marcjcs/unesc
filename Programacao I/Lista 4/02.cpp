#include <stdio.h>

int imparOuPar(int numero);

int main()
{
	int num;
	scanf("%d",&num);
	printf("%d",imparOuPar(num));
	return 0;
}

int imparOuPar(int numero)
{
	if (numero%2==0)
		return 1;
	else
		return 0;
}
