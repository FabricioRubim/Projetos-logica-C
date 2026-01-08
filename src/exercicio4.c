#include <stdio.h>

// Estrutura fora da função para falar de que tipo é o modelo do carro
    struct carro
    {
        char modelo[100];
        int ano;
        char marca[50];
        char cor[15];
        double preco;
    };

int main()
{
    // Descrição do comprador
    double comprador;
    comprador = 3000.00;

    // Essa mesma descrição so que em um array
    struct carro p1 = {"Kwid", 2025, "Renault", "Vermelho", 2000.00};

    // Descrição do carro
    printf("Modelo do carro é: %s\n\n", p1.modelo);
    printf("Ano do carro é: %d\n\n", p1.ano);
    printf("Marca do carro é: %s\n\n", p1.marca);
    printf("Cor do carro é: %s\n\n", p1.cor);
    printf("Preço do carro é: %.2f\n\n", p1.preco);

    // Condição se for verdadeiro ou falso
    if(comprador >= p1.preco){
        printf("O comprador comprou o carro\n\n");
        comprador -= p1.preco;
    }

    else{
    printf("Compra invalida\n");
    }

    
    
    // Mostra no terminal quanto que o comprador ficou de dinheiro
    printf("resto do dinheiro: %.2f\n", comprador);

    return 0;
}