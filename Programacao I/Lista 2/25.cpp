#include <stdio.h>
int main()
{
	int lin1, lin2, col1, col2, aux=0, i, j, k;
	int matriz[20][20], matriz2[20][20], matrizProduto[20][20];
	
	printf("Digite o numero de linhas da matriz 1: ");
	scanf("%d",&lin1);
	printf("Digite o numero de colunas da matriz: ");
	scanf("%d",&col1);
	
	printf("Digite o numero de linhas da matriz 2: ");
	scanf("%d",&lin2);
	printf("Digite o numero de colunas da matriz 2: ");
	scanf("%d",&col2);
	
	if (col1!=lin2)
	{
		printf("Numero de colunas diferente ao numero de linhas, a multiplicacao de matrizes e impossivel");	
	}
	
	for (i=0; i<lin1; i++)
	{
		for (j=0; j<col1; j++)
		{
			printf("Linha %d, Coluna %d: ",i+1,j+1);
			scanf("%d",&matriz[i][j]);
		}
	}
	
	for (i=0; i<lin2; i++)
	{
		for (j=0; j<col2; j++)
		{
			printf("Linha %d, Coluna %d: ",i+1,j+1);
			scanf("%d",&matriz2[i][j]);
		}
	}
	
	for (i = 0; i < lin1; i++) 
	{
		for (j = 0; j < col2; j++) 
		{
			for (k = 0; k < lin2; k++) 
			{
       			aux = aux + matriz[i][k]*matriz2[k][j];
     		}
    	matrizProduto[i][j] = aux;
    	aux = 0;
    	}
	}
	
	printf("Matriz produto:\n");
	for (i=0; i<lin1; i++)
	{
		for (j=0;  j<col2; j++)
		{
			printf("%d ",matrizProduto[i][j]);
		}
		printf("\n");
	}
	return 0;
}
