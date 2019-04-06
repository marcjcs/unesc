/*Elabore um programa em C/C++ que entre com 7 números inteiros e imprima uma listagem contendo os 7
números*/
#include <stdio.h>
#include <stdlib.h>
main ()
{
	int n[6],i;
	for (i=0;i<=6;i++)
	{
		printf("Entre um numero inteiro: ");
		scanf("%d",&n[i]);
	}	
	printf("Numeros digitados:\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",n[0],n[1],n[2],n[3],n[4],n[5],n[6]);
	system("pause");
	return 0;
}
