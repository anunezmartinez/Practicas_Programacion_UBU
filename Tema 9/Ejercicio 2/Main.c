#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int numerosAl[10];
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        for (int b = 0; b < 10; b++)
        {
            if (!(numerosAl[i] == numerosAl[b])){

                numerosAl[i] = rand() % (50 + 1 - 0);
            }
        }
    }
    

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", numerosAl[i]);
    }

    return 0;
}