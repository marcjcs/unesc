#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	char codigo;
	int valor,somav=0,somap=0;
	printf("V – para compras à vista;\nP – para compras à prazo;");
	for (;;)
	{
		printf("\nDigite o codigo: ");
		scanf(" %c",&codigo);
		if (codigo=='x'||codigo=='X')
			break;
	
		else
		{
			printf("Digite o valor da compra: ");
			scanf("%d",&valor);
		
			if (codigo=='V')
			{
				somav=somav+valor;
			}
		
			if (codigo=='P')
			{
				somap=somap+valor;
			}
	
		}
	}
	
	printf("\nValor total das compras a vista: %d\n",somav);
	printf("Valor total das compras a prazo: %d\n",somap);
	printf("Valor total das compras efetuadas: %d\n",somav+somap);
	system("pause");
	return 0;
}
