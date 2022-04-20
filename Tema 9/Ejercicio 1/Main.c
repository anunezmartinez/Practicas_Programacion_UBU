#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int min = 0;
    int max = 50;

    int numerosAl[10];
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        numerosAl[i] = (rand() % (max + 1 - min)) + min;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", numerosAl[i]);
    }

    return 0;
}