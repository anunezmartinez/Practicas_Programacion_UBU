#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int arr1[3][3], i, j;
    int arr2[3][3];
    int arr3[3][3];

    printf("Input elements in the matrix :\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            arr1[i][j] = rand() % (50 + 1 - 0);
            arr2[i][j] = rand() % (50 + 1 - 0);
        }
    }

    printf("\nMatriz 1\n");

    for (i = 0; i < 3; i++)
    {
        printf("\n");
        for (j = 0; j < 3; j++)
            printf("%d\t", arr1[i][j]);
    }
    printf("\n\n");

    printf("\nMatriz 2\n");
    for (i = 0; i < 3; i++)
    {
        printf("\n");
        for (j = 0; j < 3; j++)
            printf("%d\t", arr2[i][j]);
    }

    for (i = 0; i < 3; i++)
    {
        printf("\n");
        for (j = 0; j < 3; j++)
        {

            arr3[i][j] = arr2[i][j] + arr1[i][j];
        }
    }
    printf("\nMatriz 3 Suma de Matriz 1 y 2\n");
    for (i = 0; i < 3; i++)
    {
        printf("\n");
        for (j = 0; j < 3; j++)
            printf("%d\t", arr3[i][j]);
    }
    for (i = 0; i < 3; i++)
    {
        printf("\n");
        for (j = 0; j < 3; j++)
        {

            arr3[i][j] = arr2[i][j] - arr1[i][j];
        }
    }
    printf("\nMatriz 3 Resta de Matriz 1 y 2\n");
    for (i = 0; i < 3; i++)
    {
        printf("\n");
        for (j = 0; j < 3; j++)
            printf("%d\t", arr3[i][j]);
    }

    return 0;
}