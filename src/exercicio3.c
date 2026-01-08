#include <stdio.h>
    // Estrutura dentro do struct no caso na função de pessoa fora da função main
        struct pessoa {
        char nome [50];
        int idade;
        float altura;
        char cpf [15];
        char cidade[8];
    };

int main(void)
{
    // Informações da pessoa

    struct pessoa p1 = {"Fabricio", 19, 1.74, "333.333.333-10", "New york"};

    printf("Nome: %s\n\n", p1.nome);
    printf("Idade: %d\n\n", p1.idade);
    printf("Altura: %.2f\n\n", p1.altura);
    printf("CPF: %s\n\n", p1.cpf);
    printf("Cidade: %s\n", p1.cidade);
    
    return 0;
}