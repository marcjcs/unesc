/*Elaborar um algoritmo que l� 2 valores a e b e os escreve com a mensagem: �S�o m�ltiplos� ou �N�o s�o m�ltiplos�.*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	int a,b;
	printf("Digite dois n�meros (um em cada linha):\n\n");
	scanf("%d %d",&a,&b);
	if (a%b==0)
	{
		printf("\nS�o m�ltiplos");
	}
	else
	{
		printf("\nN�o s�o m�ltiplos");
	}
	getch();
}
