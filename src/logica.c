#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int num1 = 10;
    int num2 = 4;
    
    scanf("%d %d", &num1, &num2);
    
    printf("%d\n", num1 + num2);
    printf("%d\n", num1 - num2);
    
    // floats
    
    float num3 = 4.0;
    float num4 = 2.0;
    
    scanf("%f %f", &num3, &num4);
    
    printf("%.1f\n", num3 + num4);
    printf("%.1f\n", num3 - num4);
    
    return 0;
}