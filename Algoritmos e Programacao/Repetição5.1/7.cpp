#include<stdio.h>
#include <stdlib.h>

float raizquadrada(float num)
{
	float estim = num;
	float y = 1;
	float erro = 0.05;
	while(estim - y > erro)
	{
		estim = (estim + y)/2;
		y = num/estim;
	}
	return estim;
}

main()

{
	int n;
	printf("Digite um numero: ");
	scanf("%d",&n);
	printf("Raiz quadrada de %d: %f\n", n, raizquadrada(n));
	system("pause");
	return 0;
}
