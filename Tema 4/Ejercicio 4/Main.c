#include <stdio.h>
#include <ctype.h>

char leerLetra();
void convertirAMayuscula(char *);
void escribirLetra(char);

int main()
{

    char letra = leerLetra();
    convertirAMayuscula(&letra);
    escribirLetra(letra);
    return 0;
}

char leerLetra()
{
    char letra;
    printf("Introduce la letra : \n");
    letra = getc(stdin);
    return letra;
}

void convertirAMayuscula(char *letra)
{
    

    char letramayus = toupper(*letra);
    *letra = letramayus;
}

void escribirLetra(char letra)
{

    printf("La letra en mayúsuclas es %c", letra);
}