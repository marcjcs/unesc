#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	int i,primeiro,segundo,proximo,soma=0;
	printf("Digite o primeiro termo da série de Ricci: ");
	scanf("%d",&primeiro);
	printf("Digite o segundo termo da série de Ricci: ");
	scanf("%d",&segundo);
	for (i=1;i<=10;i++)
	{
		if (i==1)
		{
			proximo=primeiro;
		}
		else if (i==2)
		{
			proximo=segundo;
		}
		else 
		{
			proximo=primeiro+segundo;
			primeiro=segundo;
			segundo=proximo;
		}
		soma=soma+proximo;
		printf("%d\n",proximo);
	}
	printf("\nSoma dos termos: %d",soma);
	getch();
}
