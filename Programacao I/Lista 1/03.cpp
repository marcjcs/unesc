void precos(float &precoFabrica, float &percentualLucro, float &percentualImposto);
float lucro(float precoFabrica, float  percentualLucro);
float imposto(float precoFabrica, float percentualImposto);
float precoFinal(float precoFabrica, float percentualLucro, float percentualImposto);

#include <stdio.h>

int main()
{
	float precoFabrica, percentualLucro, percentualImposto;
	precos(precoFabrica, percentualLucro, percentualImposto);
	printf("Lucro do distribuidor: %.2f\n",lucro(precoFabrica, percentualLucro));
	printf("Valor dos impostos: %.2f\n",imposto(precoFabrica,percentualImposto));
	printf("Preco final do veiculo: %.2f",precoFinal(precoFabrica, percentualLucro, percentualImposto));
	return 0;
}

void precos(float &precoFabrica, float &percentualLucro, float &percentualImposto)
{
	printf("Preco de fabrica: ");
	scanf("%f",&precoFabrica);
	printf("Percentual de lucro: ");
	scanf("%f",&percentualLucro);
	printf("Percentual de imposto: ");
	scanf("%f",&percentualImposto);
}

float lucro(float precoFabrica, float percentualLucro)
{
	return precoFabrica*(percentualLucro/100.0);
}

float imposto(float precoFabrica, float percentualImposto)
{
	return precoFabrica*(percentualImposto/100.0);
}

float precoFinal(float precoFabrica, float percentualLucro, float percentualImposto)
{
	return precoFabrica+((precoFabrica)*percentualLucro/100.0)-((precoFabrica)*percentualImposto/100.0);
}
