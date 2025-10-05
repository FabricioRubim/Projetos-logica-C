// Sistema de aéroporto
#include <stdio.h>
#include <string.h>

// Funções de decisões

char igualaroCPF(char cpf[], char cpfBloqueado[]){
    if(strcmp(cpf, cpfBloqueado) == 0){
        printf("Não pode passar");
    }
    else{
        printf("Pode passar");
    }
    return 0;
}

int numeroDeItens(int itens, int numeroLimiteDeItens){
    if(itens > numeroLimiteDeItens){
        printf("Não pode passar");
    }
    else{
        printf("Pode passar");
    }
    return 0;
}

int comparacaoDeIdade(int idade){
    if (idade > 18)
    {
        printf("Pode passar");
    }
    else{
        printf("Não pode passar");
    }
    return 0;
}

// Variaveis gerais 
int numeroLimiteDeItens = 8;
char cpfBloqueado[15] = "333.211.170-10";

// Structs/Estruturas

struct pessoa1{
    char nome[30];
    int idade;
    char cpf[15];
    char sexo;
    char pais[20];
    int itens;
};

struct pessoa2{
    char nome[30];
    int idade;
    char cpf[15];
    char sexo;
    char pais[20];
    int itens;
};

struct pessoa3{
    char nome[30];
    int idade;
    char cpf[15];
    char sexo;
    char pais[20];
    int itens;
};

// Função principal das pessoas
int main()
{
    struct pessoa1 p1 = {"Rafael", 18, "333.221.170-20", 'M', "Alemanha", 8};
    struct pessoa2 p2 = {"Joice", 24, "333.211.170-10", 'M', "Belgica", 8};
    struct pessoa3 p3 = {"Luiza", 36, "333.231.170-20", 'M', "Russia", 9};

    printf("%s, Pode passar\n", p1.nome);
    printf("%s, Nao pode passar por causa do cpf %s\n", p2.nome, p2.cpf);
    printf("%s, Nao pode passar pelo numero de itens %d\n", p3.nome, p3.itens);

    return 0;
}