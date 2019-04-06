/*Elaborar um algoritmo que lê 2 valores a e b e os escreve com a mensagem: “São múltiplos” ou “Não são múltiplos”.*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	int a,b;
	printf("Digite dois números (um em cada linha):\n\n");
	scanf("%d %d",&a,&b);
	if (a%b==0)
	{
		printf("\nSão múltiplos");
	}
	else
	{
		printf("\nNão são múltiplos");
	}
	getch();
}
