/*                                                      
    Author: Adrián Núñez Martínez                          
                                                           
    Purpose:  Ejercicios de Funciones.            
                                                          
    Ubicación: Universidad de Burgos.         
*/  

#include <stdio.h>
#include <math.h>

int perimetro (int);
int area (int);
void pide_lado (int *);

int main(){

    int lado1;

    pide_lado(&lado1);
    perimetro(lado1);
    area(lado1);

    return 0;
}

int perimetro (int lado1){
int perimetro;
perimetro = M_PI * pow(lado1, 2);
return printf("El tamaño del perímetro es %i\n", perimetro);
}

int area (int lado1){
int area;
area =  2 * M_PI * lado1;
return printf("El tamaño del área es : %i\n", area);
}

void pide_lado(int *a){

    printf("Introduce el tamaño del lado : \n");
    scanf("%d",&*a);
}