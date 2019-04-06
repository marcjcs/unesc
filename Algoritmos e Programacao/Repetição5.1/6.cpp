#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main ()
{
	int i,teste,teste2;
	printf("Numeros validos:\n");
	for (i=1000;i<=9999;i++)
	{
		teste=(i/100)+(i%100);
		teste2=pow(teste,2);
		if (teste2==i){
			printf("%d\n",teste2);
		}
	}
	system("pause");
	return 0;
}
