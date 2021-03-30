#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float powerFunction(float base, int exponent);
void powerFunction_2(float base, int exponent);
void variable_data(int *pointer_to_random_int);

int main()
{
    float base;
    int exponent, random_int, *pointer_to_random_int = NULL;

    printf("*** Programa que muestra la dirección y el contenido de un entero ingresado por pantalla ***");
    printf("\nIngrese un número entero: ");
    scanf("%d", &random_int);
    pointer_to_random_int = &random_int;

    /* Apartado C*/
    variable_data(pointer_to_random_int);

    /* Apartado A*/
    printf("\n***Programa para calcular la potencia de un número real elevado a un exponente entero***");
    printf("\nIngrese la base: ");
    scanf("%f", &base);
    printf("\nIngrese el exponente: ");
    scanf("%d", &exponent);
    printf("\nResultado de la operación: %.2f", powerFunction(base, exponent));

    /* Apartado B*/
    printf("\n***Programa Nro 2 para calcular la potencia de un número real elevado a un exponente entero***");
    printf("\nIngrese la base: ");
    scanf("%f", &base);
    printf("\nIngrese el exponente: ");
    scanf("%d", &exponent);
    powerFunction_2(base, exponent);

    return 0;
}

float powerFunction(float base, int exponent)
{
    float result = base;
    int count = 1;
    int aux = abs(exponent);
    if (exponent == 0)
    {
        return 1;
    }
    else
    {
        while (count < aux)
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

void powerFunction_2(float base, int exponent)
{
    float result = base;
    int count = 1;
    int aux = abs(exponent);
    if (exponent == 0)
    {
        printf("%.2f elevado a %d es igual a: 1", base, exponent);
    }
    else
    {
        while (count < aux)
        {
            result *= base;
            count++;
        }
        if (exponent > 0)
        {
            printf("%.2f elevado a %d es igual a: %.2f", base, exponent, result);
        }
        else
        {
            printf("%.2f elevado a %d es igual a: %.2f", base, exponent, (float)(1 / result));
        }
    }
}

void variable_data(int *pointer_to_random_int)
{
    printf("\nDirección de memoria de la variable ingresada: %p", pointer_to_random_int);
    printf("\nContenido de la variable ingresada: %d", *pointer_to_random_int);
}
/**/