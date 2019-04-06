#include <stdio.h>
int main()
{
	float numeros[2];
	int opcao;
	for (int i=0; i<2; i++)
	{
		scanf("%f",&numeros[i]);
	}
	printf("1. Soma\n2. Subtracao\n3. Multiplicacao\n4. Divisao\nDigite a opcao: ");
	scanf("%d",&opcao);
	switch (opcao)
	{
		case 1:
			printf("%.2f",numeros[0]+numeros[1]);
			break;
		case 2:
			printf("%.2f",numeros[0]-numeros[1]);
			break;
		case 3:
			printf("%.2f",numeros[0]*numeros[1]);
			break;
		case 4:
			printf("%.2f",numeros[0]/numeros[1]);
			break;
	}
}
