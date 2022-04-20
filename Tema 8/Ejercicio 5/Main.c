#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fich1, *fich2;
    char nombreFich[100], c;

    printf("Introuduce le nombre del fichero para leerlo. \n");
    scanf("%s", nombreFich);

    fich1 = fopen(nombreFich, "r");
    if (fich1 == NULL)
    {
        printf("No se ha poidod abrir el fichero %s \n", nombreFich);
        exit(0);
    }

    printf("Introduce el nombre del fichero donde escribir lo copiado.\n");
    scanf("%s", nombreFich);

    fich2 = fopen(nombreFich, "w");

    c = fgetc(fich1);
    while (c != EOF)
    {
        fputc(c, fich2);
        c = fgetc(fich1);
    }

    printf("\nContenido copiado a %s", nombreFich);

    fclose(fich1);
    fclose(fich2);
    return 0;
}
