/*#include <stdio.h>
main ()
{
	int i,n=0,resultado=0,num=1000;
	for (i=1;i<=50;i++)
	{
		n++;
		resultado=resultado+(num/n);
		num=num-3;
	}
	printf("%d",resultado);
}*/
#include <stdio.h>
#include <stdlib.h>

    main()
{
   float dividendo = 1000.0;
   int divisor =1;
   float resultado = 0.0;
   for(divisor=1;divisor<=50;divisor++)
   {
       if(divisor %2==1)
       {
           resultado += dividendo/divisor;
       }else{
            resultado -= dividendo/divisor;
            }
       dividendo-=3;
    }
    printf("Resultado da expressao %6.2f\n",resultado);
}
