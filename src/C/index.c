#include <stdio.h>


int main(void)
{

    double r, resultado;
    const double PI = 3.14;
    r = 2;
    resultado = PI * (r * r);

    printf("%.3f\n", resultado);

    return 0;
}