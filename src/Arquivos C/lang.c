#include <stdio.h>

int main(void)
{
    int num = 2;

    if(num % 2 == 0){
        printf("%d é par", num);
    }
    else{
        printf("%d É impar", num);
    }

    return 0;
}