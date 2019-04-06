#include <stdio.h>
int main()
{
	float notas[3], pesos[3], cont=0, media=0;
	for (int i=0; i<=2; i++)
	{
		printf("Nota %d = ",i+1);
		scanf("%f",&notas[i]);
		printf("Peso da nota %d = ",i+1);
		scanf("%f",&pesos[i]);
	}
	for (int i=0; i<=2; i++)
	{
		cont+=notas[i]*pesos[i];
		media+=pesos[i];
	}
	media=cont/media;
	printf("Media = %.2f",media);
	return 0;
}
