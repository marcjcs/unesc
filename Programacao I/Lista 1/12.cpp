#include <stdio.h>
int main()
{
	float numero;
	scanf("%f",&numero);
	while(numero!=-999)
	{
			printf("%.2f\n",numero*3);
			scanf("%f",&numero);
	}
	return 0;
}
