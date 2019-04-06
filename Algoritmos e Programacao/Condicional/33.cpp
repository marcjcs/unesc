/*33. Elabore um algoritmo que mostre o menu de opções a seguir, receba a opção do usuário e os dados
necessários para executar cada operação*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	char escolha;
	float num;
	printf("Menu de Opções\n\na. Arredondamento para baixo\nb. Arredondamento para cima\nc. Logaritmo natural\nd. Logaritmo de base 10\ne. Valor absoluto\nf. Parte inteira\ng. Parte decimal\nh. Quadrado\ni. Raiz quadrada\n\n");
	repeat:
	printf("Digite a opção desejada: ");
	scanf(" %c",&escolha);
	switch (escolha)
	{
		case 'a' :
			printf("\nDigite o número para arredondar para baixo: ");
			scanf("%f",&num);
			printf("O número %.2f arredondado para baixo é: %.0f",num,floor(num));
			break;
		case 'b' :
			printf("\nDigite o número para arredondar para cima: ");
			scanf("%f",&num);
			printf("O número %.2f arredondado para cima é: %.0f",num,ceil(num));
			break;
		case 'c' :
			printf("\nDigite o número para fazer o logaritmo natural: ");
			scanf("%f",&num);
			printf("O logaritmo natural de %.2f é: %.5f",num,log(num));
			break;
		case 'd' :
			printf("\nDigite o número para fazer o logaritmo de base 10: ");
			scanf("%f",&num);
			printf("O logaritmo de base 10 de %.2f é: %.5f",num,log10(num));
			break;
		case 'e' :
			printf("\nDigite o valor para mostrar o valor absoluto: ");
			scanf("%f",&num);
			printf("O valor absoluto de %.2f é: %d",num,abs(num));
			break;
		case 'f' :
			printf("\nDigite o valor para mostrar a parte inteira: ");
			scanf("%f",&num);
			printf("A parte inteira de %.2f é: %d",num,int (num));
			break;
		case 'g' :
			printf("\nDigite o valor para mostrar a parte decimal: ");
			scanf("%f",&num);
			printf("A parte decimal de %.2f é: %.2f",num,num-int(num));
			break;
		case 'h' :
			printf("\nDigite o valor para mostrar o valor ao quadrado: ");
			scanf("%f",&num);
			printf("O valor de %.2f ao quadrado é: %.2f",num,pow(num,2));
			break;
		case 'i' :
			printf("\nDigite o valor para mostrar a raiz quadrada do valor: ");
			scanf("%f",&num);
			printf("O valor da raiz quadrada de %.2f é: %.4f",num,sqrt(num));
			break;
		default :
			printf("\nA opção digitada não existe\n\n");
			goto repeat;
	}
	getch ();
}
