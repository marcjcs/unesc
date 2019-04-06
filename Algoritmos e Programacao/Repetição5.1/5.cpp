#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n1, n2, resultado = 1;
    printf("Entre com a base: ");
    scanf("%d", &n1);
    printf("Entre com a potencia: ");
    scanf("%d", &n2);
    while (n2!=0)
    {
        resultado *= n1;
        n2--;
    }
    printf("Resposta = %d\n", resultado);
    system("pause");
    return 0;
}
