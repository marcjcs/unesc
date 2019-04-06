#include <stdio.h>
int main()
{
	int lin, col;
	int matriz[20][20];
	int menor;
	int cont=2;
	printf("Digite o numero de linhas: ");
	scanf("%d",&lin);
	printf("Digite o numero de colunas: ");
	scanf("%d",&col);
	for (int i=0; i<lin; i++)
	{
		for (int j=0; j<col; j++)
		{
			printf("Linha %d, Coluna %d: ",i+1,j+1);
			scanf("%d",&matriz[i][j]);
		}
	}
	menor = matriz[0][col-1];
	for (int i=1; i<lin; i++)
	{
		if (matriz[i][col-cont]<menor)
		{
			menor=matriz[i][col-cont];
		}
		cont++;
	}
	printf("%d e o menor elemento da diagonal secundaria",menor);
	return 0;
}
