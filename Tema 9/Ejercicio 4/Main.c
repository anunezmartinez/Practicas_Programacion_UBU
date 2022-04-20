#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int arr1[10][10], arr2[10][10], mul[10][10], j, k;

    for (int i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            arr1[i][j] = rand() % (50 + 1 - 0);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            arr2[i][j] = rand() % (50 + 1 - 0);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            mul[i][j] = 0;
            for (k = 0; k < 3; k++)
            {
                mul[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
    printf("\nMatriz 1\n");
    for (int i = 0; i < 3; i++)
    {
        printf("\n");
        for (int j = 0; j < 3; j++)
            printf("%d\t", arr1[i][j]);
    }

    printf("\nMatriz 2\n");
    for (int i = 0; i < 3; i++)
    {
        printf("\n");
        for (int j = 0; j < 3; j++)
            printf("%d\t", arr2[i][j]);
    }

    printf("\nResultado :  \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", mul[i][j]);
        }
    }
    return 0;
}