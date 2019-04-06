//13. Elabore um algoritmo que leia dois números e responda se a divisão do primeiro pelo 
//segundo é exata (o resto da divisão deve ser igual a 0). Se for, o algoritmo deve imprimir a mensagem 
//“A divisão de (1º numero) por (2º número) é exata”.
#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	int num[1];
	printf("Digite o primeiro número: ");
	scanf("%d",&num[0]);
	printf("Digite o segundo número: ");
	scanf("%d",&num[1]);
	printf("A divisão de %d por %d %s",num[0],num[1],(num[0]%num[1]==0 ? "é exata":"não é exata"));
/*	if (num[0]%num[1]==0)
	{
		printf("A divisão de %d por %d é exata",num[0],num[1]);
	}*/
	getch ();
}
