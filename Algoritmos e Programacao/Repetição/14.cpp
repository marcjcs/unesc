/*Elabore um algoritmo que leia um n�mero e imprima todos os n�meros de 1 at� o n�mero lido, e tamb�m o seu
produto. */
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
unsigned long long int fatorial(unsigned int n) {
	if (n<=1){
		return 1;
	}
	return n * fatorial(n-1);
}
main ()
{
	setlocale(LC_ALL,"Portuguese");
	int i,n,produto;
	printf("Digite um n�mero: ");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
//		produto=produto*i;
		printf("%d\n",i);
	}
//	printf("Produto: %d",produto);
	printf("Produto: %d",fatorial(n));
	getch();
}
