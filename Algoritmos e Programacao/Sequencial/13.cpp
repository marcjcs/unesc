//13. Elabore um algoritmo que leia dois n�meros e responda se a divis�o do primeiro pelo 
//segundo � exata (o resto da divis�o deve ser igual a 0). Se for, o algoritmo deve imprimir a mensagem 
//�A divis�o de (1� numero) por (2� n�mero) � exata�.
#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	int num[1];
	printf("Digite o primeiro n�mero: ");
	scanf("%d",&num[0]);
	printf("Digite o segundo n�mero: ");
	scanf("%d",&num[1]);
	printf("A divis�o de %d por %d %s",num[0],num[1],(num[0]%num[1]==0 ? "� exata":"n�o � exata"));
/*	if (num[0]%num[1]==0)
	{
		printf("A divis�o de %d por %d � exata",num[0],num[1]);
	}*/
	getch ();
}
