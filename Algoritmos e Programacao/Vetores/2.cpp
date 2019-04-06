/*Elabore um programa em C/C++ que leia 5 valores do tipo int em um vetor A. Ao final, imprima todos os
elementos do vetor, em ordem normal e ordem inversa, conforme o exemplo abaixo:*/
#include <stdio.h>
#include <stdlib.h>
main ()
{
	int n[4],i;
	for (i=0;i<=4;i++)
	{
		printf("Entre um numero inteiro: ");
		scanf("%d",&n[i]);
	}	
	printf("Numeros digitados ordem normal:\n%d\n%d\n%d\n%d\n%d\n",n[0],n[1],n[2],n[3],n[4]);
	printf("Numeros digitados ordem inversa:\n%d\n%d\n%d\n%d\n%d\n",n[4],n[3],n[2],n[1],n[0]);
	system("pause");
	return 0;
}
