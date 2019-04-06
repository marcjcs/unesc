#include <stdio.h>
#include <locale.h>

main ()
{
	setlocale(LC_ALL,"Portuguese");
	int numero,maiorNumero,menorNumero;
	
	do{
		printf("Digite um número: ");
		scanf("%d",&numero);
	
		maiorNumero = numero;
		menorNumero = numero;
	
		if (numero < 0){
			printf("Digite um número maior que 0!\n");
		}
		
	} while (numero < 0);
	
	while (numero > 0)
	{
		do{
			printf("Digite outro número: ");
			scanf("%d",&numero);
		
			if (numero < 0){
				printf("Digite um número maior que 0!\n");
			}
			
		} while (numero < 0);
		
		if (numero > maiorNumero){
			maiorNumero = numero;
		}
		
		if (numero < menorNumero && numero != 0){
			menorNumero = numero;
		}
	}
	printf("Maior número: %d\n",maiorNumero);
	printf("Menor número: %d\n",menorNumero);
	return 0;
}
