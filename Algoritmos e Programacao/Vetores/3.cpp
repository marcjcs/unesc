/*Elabore um programa em C/C++ que leia 5 valores do tipo int em um vetor A. Ao final, imprima todos os
elementos, o maior, o menor, e a média dos valores informados*/
#include <stdio.h>
#include <stdlib.h>
main ()
{
	int n[4],i,maior=-99999999,menor=99999999;
	for (i=0;i<=4;i++)
	{
		printf("Entre com um numero: ");
		scanf("%d",&n[i]);
		if (n[i]>maior)
		{
			maior=n[i];
		}
		if (n[i]<menor)
		{
			menor=n[i];
		}
	}
	printf("\nNumeros digitados: %d - %d - %d - %d - %d \n",n[0],n[1],n[2],n[3],n[4]);
	printf("Media: %d\n",(n[0]+n[1]+n[2]+n[3]+n[4])/i);
	printf("Maior numero: %d\n",maior);
	printf("Menor numero: %d\n",menor);
	system("pause");
	return 0;
}
