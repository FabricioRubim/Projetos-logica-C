#include <stdio.h>

int main(void)
{
    // Variavel do tipo inteiro
    int num = 2;

    // Verifica se o número é par ou impar/primo ou não é!
    if(num % 2 == 0){
        printf("%d é par", num);
    }
    else{
        printf("%d É impar", num);
    }

    return 0;
}