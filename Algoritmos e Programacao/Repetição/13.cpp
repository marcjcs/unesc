/*Elabore um algoritmo que imprima todos os n�meros pares e �mpares compreendidos entre 85 e 906, e
imprimir, ao final, a soma dos pares, a soma dos �mpares, o percentual de pares, e o percentual de �mpares,*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	int i,n,pares=0,impares=0,somapar=0,somaimp=0;
	for (i=85;i<=906;i++)
	{
		if (i%2==0)
		{
		printf("Par: %d\n",i);
		pares++;
		somapar=i+somapar;
		}
		else
		{
		printf("Impar: %d\n",i);
		impares++;
		somaimp=i+somaimp;
		}
	}
	printf("A soma dos n�meros pares compreendidos entre 85 e 906 �: %d\n",somapar);
	printf("A soma dos n�meros impares compreendidos entre 85 e 906 �: %d\n",somaimp);
	printf("O percentual de n�meros pares � de: %d%%\n",(pares*100)/822);
	printf("O percentual de n�meros impares � de: %d%%\n",(impares*100)/822);
	getch();
}
