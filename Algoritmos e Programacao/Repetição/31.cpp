/* Na série A do campeonato brasileiro de futebol de 2003, do qual fazem parte Grêmio, Criciúma, entre outros,
participam 20 times. Sabendo-se que na documentação de cada time, constam, além de outros dados, peso e
idade dos 22 jogadores, elabore um algoritmo que apresente as seguintes informações:
a. O peso médio e a idade média de cada um dos times;
b. O peso médio e a idade média de todos os participantes.*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	int idade,i,j,somatimeidade=0,somatotalidade=0;
	float peso,somatimepeso=0,somatotalpeso=0;
	for (i=1;i<=3;i++)
	{
		for (j=1;j<=4;j++){
			printf("Digite o peso do jogador: ");
			scanf("%f",&peso);
			printf("Digite a idade do jogador: ");
			scanf("%d",&idade);
			somatimepeso=somatimepeso+peso;
			somatimeidade=somatimeidade+idade;
		}
		printf("\nPeso médio: %.2f",somatimepeso/4);
		printf("\nIdade média: %d\n\n",somatimeidade/4);
		somatotalpeso=somatimepeso+somatotalpeso;
		somatotalidade=somatimeidade+somatotalidade;
		somatimepeso=0;
		somatimeidade=0;
	}
	printf("Peso médio entre todos participantes: %.2f",somatotalpeso/10);
	printf("\nIdade média entre todos participantes: %d",somatotalidade/);
	getch();	
}
