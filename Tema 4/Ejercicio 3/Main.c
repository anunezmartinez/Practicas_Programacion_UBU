#include <stdio.h>
#include <math.h>

int pide_lados();
void pide_radio(float *);
void perimetro(int,float);
void longitud_lado(int, float);
void area(float, float);
float apotema(float);

int main()
{
    float radio = 0;
    pide_radio(&radio);
    int lados = 0;
    lados = pide_lados();
    
    longitud_lado(lados, radio);
    //perimetro( ,lados);

    return 0;
}

int pide_lados()
{
    int nlads = 0;
    nlads = getc(stdin);
    return nlads;
}

void pide_radio(float *num1)
{

    scanf("%f", num1);
}

void logintud_lado(int lados, float radio)
{

    int lado = sqrt(2 * exp(radio) * (1 - cos(360 / lados)));

    float perimetro = lado * lados;
    printf("El perímetro es %f\n",perimetro);
}

void perimetro(int num1, float num2)
{
    


}