/*No dia da estr�ia do filme �O motoqueiro fantasma�, um famoso instituto de pesquisa internacional realizou uma pesquisa logo ap�s o encerramento do filme.
Cada expectador respondeu a um question�rio no qual constava sua idade, e a sua opini�o em rela��o ao filme: 
excelente � 3; bom � 2; regular � 1. Elabore um algoritmo que receba a idade e a opini�o de 100 expectadores, calcule e imprima:*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	int i,idade,opiniao,mediaidade=0,n1=0,percentualbom=0,qtdregular;
	for (i=1;i<=100;i++)
	{
		printf("Informe sua idade: ");
		scanf("%d",&idade);
		printf("O que voc� achou do filme?\n(3) excelente - (2) bom - (1) regular\n");
		scanf("%d",&opiniao);
		switch (opiniao)
		{
			case 3:
				mediaidade=mediaidade+idade;
				n1++;
				break;
			case 2:
				percentualbom++;
				break;
			case 1:
				qtdregular++;
				break;
		}
	}
	printf("\nM�dia das pessoas que responderam excelente: %d\n",mediaidade/n1);
	printf("Quantidade de pessoas que responderam regular: %d\n",qtdregular);
	printf("Percentual de pessoas que responderam bom: %d%%\n",(percentualbom*100)/3);
	getch();
}
