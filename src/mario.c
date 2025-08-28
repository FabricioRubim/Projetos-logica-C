#include <stdio.h>
#include <cs50.h>

// Validar a entrada de numeros em 1 a 8
int main(void)
{
    int n;
    do
    {
        n = get_int("Digite um numero de 1 a 8: ");
    } while (n < 1 || n > 8);

    for(int i = 0; i < n; i++) // constroi o numero de linhas 
    {
        for(int j = 0; j < n; j++) // constroi as colunas
        {
            if(n - i - 2 < j) // Verifica qual posição devemos desenhar as #
            {                 // Se j (posição atual) for maior ou igual a esse numero, desenhamos
                printf("#");
            }
            else
            {
                printf(""); // Caso o contrario desenhamos um espaço
            }
        }
        printf("\n");
    }
    
    return 0;
}