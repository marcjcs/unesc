#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"Portuguese");
	char conceito;
	printf("Conceito: ");
	scanf("%c",&conceito);
	switch(conceito){
		case 'a':
		case 'A':
			printf("Sua média final ficou entre 9 e 10. Parabéns!");
			break;
		case 'b':
		case 'B':
			printf("Sua média final ficou entre 7,5 e 8,9. Muito bom!");
			break;
		case 'c':
		case 'C':
			printf("Sua média final ficou entre 6 e 7,4. Bom, mas deve melhorar!");
			break;
		case 'd':
		case 'D':
			printf("Sua média final ficou entre 0 e 5,9. Você deve fazer a prova final!");
			break;
	}
	return 0;
}
