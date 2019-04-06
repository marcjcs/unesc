#include <stdio.h>
int main()
{
	float salario;
	printf("Salario: ");
	scanf("%f",&salario);
	if (salario<500.00)
	{
		printf("Salario reajustado: %.2f",salario+(salario*0.3));
	}
	else
	{
		printf("Voce nao tem direito ao aumento");
	}
	return 0;
}
