#include <stdio.h>
int main()
{
	double ntermos, aux=3;
	double pi=4;
	printf("Numero de termos a ser usado: ");
	scanf("%lf",&ntermos);
	for (int i=1; i<=ntermos; i++)
	{
		if (i==1)
			pi=pi-(4/aux);
		else if (i%2!=0)
			pi=pi-(4/aux);
		else if (i%2==0)
			pi=pi+(4/aux);
		aux+=2;
	}
	printf("Resultado de pi baseado no numero de termos: %lf",pi);
	return 0;
}
