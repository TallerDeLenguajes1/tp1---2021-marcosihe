#include <stdio.h>

float powerFunction(float base, int exponent);

int main()
{
    float base;
    int exponent;
    printf("***Programa para calcular la potencia de un número real elevado a un exponente entero***");
    printf("\nIngrese la base: ");
    scanf("%f", &base);
    printf("\nIngrese el exponente: ");
    scanf("%d", &exponent);

    printf("\nResultado de la operación: %.2f", powerFunction(base, exponent));

    return 0;
}

float powerFunction(float base, int exponent)
{
    float result = base;
    int count = 1;
    if (exponent == 0)
    {
        return 1;
    }
    else
    {
        while (count < exponent)
        {
            result *= base;
            count++;
        }
        if (exponent > 0)
        {
            return result;
        }
        else
        {
            return (float)(1 / result);
        }
    }
}