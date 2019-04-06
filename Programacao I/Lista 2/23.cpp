#include <stdio.h>
int main()
{
	int lin, col;
	int matriz[20][20];
	double res=0;
	int cont=0;
	
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
	
	for (int i=0; i<lin; i++)
	{
		res=res+(matriz[i][cont]);
		cont++;
	}
	
	printf("%.2lf e a media aritmetica da diagonal principal",double(res/cont));
	return 0;
}
