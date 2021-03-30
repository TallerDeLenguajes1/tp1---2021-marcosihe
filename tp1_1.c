#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number = 25, *pointer_to_number = NULL;
    pointer_to_number = &number;

    //a: Contenido del puntero
    printf("Contenido del puntero: %p", pointer_to_number);
    printf("\nValor referenciado por el puntero: %d", *pointer_to_number);

    //b: Dirección de memoria almacenada por el puntero
    printf("\nDirección de memoria almacenada por el puntero: %p", pointer_to_number);

    //c: Dirección de memoria de la variable
    printf("\nDirección de memoria de la variable 'number': %p", &number);

    //d: Dirección de memoria del puntero
    printf("\nDirección de memoria del puntero: %p", &pointer_to_number);

    //e: Tamaño de memoria utilizado por esa variable usando la función sizeof
    printf("\nTamaño de la memoria utilizada por la variable, de tipo int, 'number': %d bytes", sizeof(number));
    printf("\nTamaño de la memoria utilizada por la variable, de tipo puntero, 'pointer_to_number': %d bytes", sizeof(pointer_to_number));

    return 0;
}