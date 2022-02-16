/*                                                      
    Author: Adrián Núñez Martínez                          
                                                           
    Purpose:  Ejercicios de Input y Datos.            
                                                          
    Ubicación: Universidad de Burgos.         
*/  

#include <stdio.h>

int main(){

    printf("Introduce el numero de kilometros: ");
    float numero0;

    scanf("%f", &numero0);

    printf("El numero de millas es : %f", numero0 * 0.6);

    return 0;
}