#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <locale.h>
main ()
{
    setlocale(LC_ALL,"Portuguese");
    char nome[30],sexo[2];
    float altura;
    int idade;
    printf("Digite o seu nome: ");
    gets(nome);
    fflush(stdin);
    printf("Digite a sua idade: ");
    scanf("%d",&idade);
    printf("Digite a sua altura (metros): ");
    scanf("%f",&altura);
    printf("\nQual o seu sexo?\n(m) Masculino - (f) Feminino\n");
    scanf("%s",&sexo);
    switch (sexo[0])
    {
        case 'm':
            if (altura>1.70&&idade<=20)
            {
                printf("\nNome: %s\nPeso ideal: %.2f",nome,(72.7*altura)-58);
            }
            else if (altura>1.70&&idade>20)
            {
                printf("\nNome: %s\nPeso ideal: %.2f",nome,(72.7*altura)-53);
            }
            else if (altura<=1.70&&idade<=40)
            {
                printf("\nNome: %s\nPeso ideal: %.2f",nome,(72.7*altura)-50);
            }
            else if (altura<=1.70&&idade>40)
            {
                printf("\nNome: %s\nPeso ideal: %.2f",nome,(72.7*altura)-58);
            }
            break;
        case 'f':
            if (altura>1,50)
            {
                printf("\nNome: %s\nPeso ideal: %.2f",nome,(62.1*altura)-44.7);
            }
            else if (altura<=1.50&&idade>=35)
            {
                printf("\nNome: %s\nPeso ideal: %.2f",nome,(62.1*altura)-45);
            }
            else if (altura<=1.50&&idade<35)
            {
                printf("\nNome: %s\nPeso ideal: %.2f",nome,(62.1*altura)-49);
            }
            break;
        default :
            {
                printf("\nO sexo informado não existe\n");
            }
    }
}
