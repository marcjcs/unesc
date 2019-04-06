#include <stdio.h>
#include <locale.h>

main ()
{
	setlocale(LC_ALL,"Portuguese");
	int numero,maiorNumero,menorNumero;
	
	do{
		printf("Digite um n�mero: ");
		scanf("%d",&numero);
	
		maiorNumero = numero;
		menorNumero = numero;
	
		if (numero < 0){
			printf("Digite um n�mero maior que 0!\n");
		}
		
	} while (numero < 0);
	
	while (numero > 0)
	{
		do{
			printf("Digite outro n�mero: ");
			scanf("%d",&numero);
		
			if (numero < 0){
				printf("Digite um n�mero maior que 0!\n");
			}
			
		} while (numero < 0);
		
		if (numero > maiorNumero){
			maiorNumero = numero;
		}
		
		if (numero < menorNumero && numero != 0){
			menorNumero = numero;
		}
	}
	printf("Maior n�mero: %d\n",maiorNumero);
	printf("Menor n�mero: %d\n",menorNumero);
	return 0;
}
