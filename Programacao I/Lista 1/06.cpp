float salarioFinal(float salarioMinimo, float horasTrabalhadas);
#include <stdio.h>
int main()
{
	float salariomin, horastrabalhadas;
	printf("Salario minimo: ");
	scanf("%f",&salariomin);
	printf("Horas trabalhadas: ");
	scanf("%f",&horastrabalhadas);
	printf("Salario a receber: %.2f\n",salarioFinal(salariomin, horastrabalhadas));
	return 0;
}

float salarioFinal(float salarioMinimo, float horasTrabalhadas)
{
	return ((salarioMinimo*0.1)*horasTrabalhadas)-(((salarioMinimo*0.1)*horasTrabalhadas)*0.03);
}
