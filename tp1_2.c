#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float powerFunction(float base, int exponent);
void powerFunction_2(float base, int exponent);
void variable_data(int *pointer_to_random_int, int aux);
void invert_values(int *pointer_a, int *pointer_b);
void order_values(int *pointer_a, int *pointer_b);

int main()
{
    float base;
    int num1, num2, exponent, random_int, *pointer_to_random_int = NULL;

    printf("*** Programa que muestra la dirección y el contenido de un entero ingresado por pantalla ***");
    printf("\nIngrese un número entero: ");
    scanf("%d", &random_int);
    pointer_to_random_int = &random_int;

    /* Apartado C*/
    printf("\n------------------------------");
    variable_data(pointer_to_random_int, 1);

    /* Apartado A*/
    printf("\n------------------------------");
    printf("\n*** Programa para calcular la potencia de un número real elevado a un exponente entero ***");
    printf("\nIngrese la base: ");
    scanf("%f", &base);
    printf("\nIngrese el exponente: ");
    scanf("%d", &exponent);
    printf("\nResultado de la operación: %.2f", powerFunction(base, exponent));

    /* Apartado B - Usando un función de tipo void*/
    printf("\n------------------------------");
    printf("\n*** Versión 2 del programa para calcular la potencia de un número real elevado a un exponente entero ***");
    printf("\nIngrese la base: ");
    scanf("%f", &base);
    printf("\nIngrese el exponente: ");
    scanf("%d", &exponent);
    powerFunction_2(base, exponent);

    /* Apartado D*/
    printf("\n------------------------------");
    printf("\n*** Programa para intercambiar entre sí, valores de dos números enteros: ***");
    printf("\nIngrese un numéro entero: ");
    scanf("%d", &num1);
    printf("\nIngrese otro número entero: ");
    scanf("%d", &num2);
    printf("\nValores ingresados:  a = %d y b = %d", num1, num2);
    invert_values(&num1, &num2);
    printf("\nValores intercambiados: a = %d y b = %d", num1, num2);

    /* Apartado E */
    printf("\n------------------------------");
    printf("\n*** Programa para ordenar de menor a mayor dos números enteros ingresados en cualquier orden ***");
    printf("\nIngrese el primer valor: ");
    scanf("%d", &num1);
    printf("\nIngrese el segundo valor: ");
    scanf("%d", &num2);
    order_values(&num1, &num2);
    printf("\nValores ordenados: a = %d y b = %d", num1, num2);

    /* Apartado F */
    printf("\n------------------------------");
    printf("\n*** Función para imprimir por pantalla, pares de valores ingresados ***");
    printf("\nIngrese el primer valor: ");
    scanf("%d", &num1);
    printf("\nIngrese el segundo valor: ");
    scanf("%d", &num2);
    variable_data(&num1, 0);
    variable_data(&num2, 0);

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

void variable_data(int *pointer_to_random_int, int aux)
{

    printf("\nContenido de la variable ingresada: %d", *pointer_to_random_int);
    if (aux == 1)
    {
        printf("\nDirección de memoria de la variable ingresada: %p", pointer_to_random_int);
    }
}

void invert_values(int *pointer_a, int *pointer_b)
{
    int aux;
    aux = *pointer_a;
    *pointer_a = *pointer_b;
    *pointer_b = aux;
}

void order_values(int *pointer_a, int *pointer_b)
{
    if (*pointer_a > *pointer_b)
    {
        invert_values(pointer_a, pointer_b);
    }
}
/**/