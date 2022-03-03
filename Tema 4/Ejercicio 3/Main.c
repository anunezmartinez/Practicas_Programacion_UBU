#include <stdio.h>
#include <math.h>

int pide_lados();
void pide_radio(float *);
void perimetro(int,float);
void longitud_lado(int,float);
void area(float, float);
float apotema(float);

float a;
float b;
float c;

int main()
{
    float radio = 0;
    int lados = 0;
    lados = pide_lados();
    pide_radio(&radio);

    
    
    longitud_lado(lados, radio);

    perimetro(a,lados);

    apotema(a);

    area(c, b);
    
    return 0;
}

int pide_lados()
{
    int nlads = 0;
    printf("Introduce el número de lados : ");
    nlads = getc(stdin);
    return nlads;
}

void pide_radio(float *num1)
{
    printf("Introduce el radio : ");
    scanf("%f", num1);
}

void longitud_lado(int lados, float radio)
{

    int lado = sqrt(2 * pow(radio, 2) * (1 - cos(360 / lados)));

    a  = lado * lados;
    printf("La longitud del lado es %f\n",a);
}

void perimetro(int num1, float num2)
{
    c = num1 * num2;
    printf("El perímetro es %f.\n", num1 * num2);

}
float apotema(float num1){

    b = sqrt(pow(num1,2) + pow((0.5*num1),2));
    return 0;
}

void area(float num1, float num2){

    printf("El área es %f\n", num1 * num2);
}