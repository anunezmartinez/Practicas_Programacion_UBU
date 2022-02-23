/*                                                      
    Author: Adrián Núñez Martínez                          
                                                           
    Purpose:  Ejercicios de Funciones.            
                                                          
    Ubicación: Universidad de Burgos.         
*/  

#include <stdio.h>

int perimetro (int, int);
int area (int, int);
void pide_lado (int *);

int main(){

    int lado1;
    int lado2;
    pide_lado(&lado1);
    pide_lado(&lado2);
    perimetro(lado1, lado2);
    area(lado1, lado2);

    return 0;
}

int perimetro (int lado1, int lado2){
int perimetro;
perimetro = 2 * lado1 + 2 * lado2;
return printf("El tamaño del perímetro es %i\n", perimetro);
}

int area (int lado1, int lado2){
int area;
area =  lado1 * lado2;
return printf("El tamaño del área es : %i\n", area);
}

void pide_lado(int *a){

    printf("Introduce el tamaño del lado : \n");
    scanf("%d",&*a);
}