#include <stdio.h>
int main()
{
    float a, b;
    printf("Enter first number: ");
    scanf("%f", &a);
    printf("Enter second number: ");
    scanf("%f",&b);
    
    a = a - b;
    b = a + b;
    a = b - a;
    printf("After swapping, first number = %f\n", a);
    printf("After swapping, second number = %f", b);
    return 0;
}

