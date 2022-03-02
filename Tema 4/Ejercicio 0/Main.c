#include <stdio.h>

void limpiarBuffer();

int main()
{

    // limpiarBuffer();
    int caracter1;
    char caracter2;

    printf("Por favor, teclea dos caracteres seguidos:\n");
    caracter1 = getc(stdin);
    caracter2 = getchar();
    printf("El primer caracter que has introducido es: %c\n", caracter1);
    printf("El segundo caracter que has introducido es: %c\n", caracter2);

    return 0;
}

void limpiarBuffer()
{

    while (getchar() != '\n')
        ;

    return;
}