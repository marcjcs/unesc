/* Na s�rie A do campeonato brasileiro de futebol de 2003, do qual fazem parte Gr�mio, Crici�ma, entre outros,
participam 20 times. Sabendo-se que na documenta��o de cada time, constam, al�m de outros dados, peso e
idade dos 22 jogadores, elabore um algoritmo que apresente as seguintes informa��es:
a. O peso m�dio e a idade m�dia de cada um dos times;
b. O peso m�dio e a idade m�dia de todos os participantes.*/
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
		printf("\nPeso m�dio: %.2f",somatimepeso/4);
		printf("\nIdade m�dia: %d\n\n",somatimeidade/4);
		somatotalpeso=somatimepeso+somatotalpeso;
		somatotalidade=somatimeidade+somatotalidade;
		somatimepeso=0;
		somatimeidade=0;
	}
	printf("Peso m�dio entre todos participantes: %.2f",somatotalpeso/10);
	printf("\nIdade m�dia entre todos participantes: %d",somatotalidade/);
	getch();	
}
