/*Elabore um algoritmo que imprima todos os números pares e ímpares compreendidos entre 85 e 906, e
imprimir, ao final, a soma dos pares, a soma dos ímpares, o percentual de pares, e o percentual de ímpares,*/
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
	printf("A soma dos números pares compreendidos entre 85 e 906 é: %d\n",somapar);
	printf("A soma dos números impares compreendidos entre 85 e 906 é: %d\n",somaimp);
	printf("O percentual de números pares é de: %d%%\n",(pares*100)/822);
	printf("O percentual de números impares é de: %d%%\n",(impares*100)/822);
	getch();
}
