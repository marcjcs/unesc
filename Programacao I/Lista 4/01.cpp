#include <stdio.h>

void imparOuPar(int numero);

int main()
{
	int num;
	scanf("%d",&num);
	imparOuPar(num);
	return 0;
}

void imparOuPar(int numero)
{
	if (numero%2==0)
		printf("Numero par");
	else
		printf("Numero impar");
}
