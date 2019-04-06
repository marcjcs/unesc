/*Elabore um programa em C/C++ que leia um vetor X com 10 números e calcule e imprima a diferença entre o
maior e o menor elemento existente no vetor, bem como as posições que o maior e o menor ocupam no
conjunto de dados.*/
#include <stdio.h>
#include <stdlib.h>
main ()
{
	int x[9], i, maior, menor, posmaior, posmenor;
	for (i=0;i<=9;i++)
	{
		printf("Digite um numero: ");
		scanf("%d",&x[i]);
		if (i==0)
		{
			maior=x[i];
			menor=x[i];
		}
		if (x[i]>maior)
		{
			maior=x[i];
			posmaior=i;
		}
		if (x[i]<menor)
		{
			menor=x[i];
			posmenor=i;
		}
	}
	printf("Diferenca entre maior e menor: %d\n",maior-menor);
	printf("Posicao no conjunto ocupada pelo maior: [%d]\n",posmaior);
	printf("Posicao no conjunto ocupada pelo menor: [%d]\n",posmenor);
	system("pause");
	return 0;
}
