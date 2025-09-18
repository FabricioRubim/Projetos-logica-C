#include <stdio.h>
// Estrutura struct para definir as variaveis no começo
struct tabela
{
    float nota1;
    float nota2;
};

int main()
{
    // Mostra a nota dos alunos

    struct tabela p1 = {7.0, 8.0};
    float calculoDaMedia = (7.0 + 8.0) / 2;
    if (calculoDaMedia >= 7)
    {

        printf("O Cristian tirou uma de %.1f e foi aprovado!\n", calculoDaMedia);
    }
    else
    {

        printf("Cristian foi reprovado!\n");
    }

    return 0;
}