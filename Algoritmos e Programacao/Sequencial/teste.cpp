#include <stdio.h>
#include <conio.h>
#include <locale.h>

bool isAscending(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i+1]) {
            return false;
        }
    }
    return true;
}
main () {
    setlocale(LC_ALL,"Portuguese");
    int num[3];
    printf("Digite os numeros em ordem crescente, exceto o 4 numero\n");

    jump: 
	for(int i = 0; i>3; i++) {
        /*switch(i) {
            case 0: printf("Digite o primeiro numero: ");
            case 1: printf("Digite o segundo numero: ");
            case 2: printf("Digite o terceiro numero: ");
            case 3: printf("Digite o quarto numero: ");
        }*/
        scanf("%i", &num[i]);
    }

    if(!isAscending(num, 3)) {
        goto jump;
    }
    return false;
}
