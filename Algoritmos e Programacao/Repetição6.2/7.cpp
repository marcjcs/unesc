#include <stdio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	int i, pessoasSim = 0, pessoasNao = 0, mulheres = 0, homensNao = 0, homens = 0, mulheresSim = 0;
	char sexo, opiniao;
	for (i = 1; i <= 10; i++){
		printf("Digite seu sexo (M para masculino, F para feminino): ");
		scanf(" %c",&sexo);
		switch (sexo){
			case 'M': case 'm':
				printf("Voc� gostou do novo produto? (S - Sim, N - N�o): ");
				scanf(" %c",&opiniao);
				if (opiniao == 'S' || opiniao == 's'){
					pessoasSim ++;
					homens ++;
				}
				if (opiniao == 'N' || opiniao == 'n'){
					pessoasNao ++;
					homens ++;
					homensNao ++;
				}
				break;
			case 'F': case 'f':
				printf("Voc� gostou do novo produto? (S - Sim, N - N�o): ");
				scanf(" %c",&opiniao);
				if (opiniao == 'S' || opiniao == 's'){
					pessoasSim ++;
					mulheres ++;
					mulheresSim ++;
				}
				if (opiniao == 'N' || opiniao == 'n'){
					pessoasNao ++;
					mulheres ++;
				}
				break;
		}
	}
	printf("N�mero de pessoas que respondeu sim: %d\n",pessoasSim);
	printf("N�mero de pessoas que respondeu n�o: %d\n",pessoasNao);
	printf("N�mero de mulheres que responderam sim: %d\n",mulheresSim);
	printf("Porcentagem de homens que responderam n�o entre todos os homens analisados: %d%%\n",homensNao * 100 / homens);
	return 0;
}
