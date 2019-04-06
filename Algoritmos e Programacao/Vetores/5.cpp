/*Elabore um programa em C/C++ que entre com 5 números inteiros em um vetor A, e gere e imprima o vetor T
triplo, que deverá conter os elementos do primeiro vetor multiplicados por 3.*/
#include <stdio.h>
#include <stdlib.h>
main ()
{
	int a[4],t[4],i;
	for (i=0;i<=4;i++)
	{
		printf("Digite um numero: ");
		scanf("%d",&a[i]);
		t[i]=a[i]*3;
	}
	printf("O triplo dos numeros digitados sao: %d - %d - %d - %d - %d\n",t[0],t[1],t[2],t[3],t[4]);
	system("Pause");
	return 0;
}
