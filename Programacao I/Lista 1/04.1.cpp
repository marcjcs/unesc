#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"Portuguese");
	char conceito;
	printf("Conceito: ");
	scanf("%c",&conceito);
	if (conceito=='A'||conceito=='a')
	{
		printf("Sua m�dia final ficou entre 9 e 10. Parab�ns!");
	}
	if (conceito=='B'||conceito=='b')
	{
		printf("Sua m�dia final ficou entre 7,5 e 8,9. Muito bom!");
	}
	if (conceito=='C'||conceito=='c')
	{
		printf("Sua m�dia final ficou entre 6 e 7,4. Bom, mas deve melhorar!");
	}
	if (conceito=='D'||conceito=='d')
	{
		printf("Sua m�dia final ficou entre 0 e 5,9. Voc� deve fazer a prova final!");
	}
	return 0;
}
