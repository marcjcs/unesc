/*Elabore um programa em C/C++ que armazene números em dois vetores inteiros de cinco elementos cada (A
e B), gere e imprima o vetor soma.*/
#include <stdio.h>
#include <stdlib.h>
main ()
{
	int a[4],b[4],sum[4],i;
	for (i=0;i<=4;i++)
	{
		printf("Type a number: ");
		scanf("%d",&a[i]);
		printf("Type another number: ");
		scanf("%d",&b[i]);
		sum[i]=a[i]+b[i];		
	}
	printf("Sum: %d - %d - %d - %d - %d\n",sum[0],sum[1],sum[2],sum[3],sum[4]);
	system("pause");
	return 0;
}
