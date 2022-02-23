/*                                                      
    Author: Adrián Núñez Martínez                          
                                                           
    Purpose:  Ejercicios de Funciones.            
                                                          
    Ubicación: Universidad de Burgos.         
*/  

#include <stdio.h>

int perimetro (int);
int area (int);
void pide_lado (int *);

int main(){

    int lado;
    pide_lado(&lado);
    perimetro(lado);
    area(lado);



    return 0;
}

int perimetro (int lado){
int perimetro;
perimetro = lado * 4;
return printf("El tamaño del perímetro es %i\n", perimetro);
}

int area (int lado){
int area;
area =  lado * lado;
return printf("El tamaño del área es : %i\n", area);
}

void pide_lado(int *a){

    printf("Introduce el tamaño del lado : \n");
    scanf("%d",&*a);
}