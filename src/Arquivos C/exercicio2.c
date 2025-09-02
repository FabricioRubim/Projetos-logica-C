#include <stdio.h>
    
int main(void)
{
    char *tabela [5] = {"Arroz", "Feijão", "Carne", "Leite", "Farinha"};

    for(int i = 0; i < 5; i++){
        
        printf("%s\n", tabela[i]);

    }

    double arroz, feijao, carne, leite, farinha, calculo;
    
    arroz = 8.22;
    feijao = 4.99;
    carne = 3.45;
    leite = 5.00;
    farinha = 3.00;
    calculo = arroz + feijao + carne + leite + farinha;
    
    double dinheiro;
    dinheiro = 50.00;

    printf("\nO resto do dinheiro ficou: %.2f\n", dinheiro - calculo);
    
    return 0;
}