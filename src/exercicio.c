#include <stdio.h>

int main(void)
{
    char nome[50];
    int idade;

    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Ola %s, você tem %d anos de idade\n", nome, idade);

    return 0;
}