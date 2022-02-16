/*                                                      
    Author: Adrián Núñez Martínez                          
                                                           
    Purpose:  Ejercicios de Input y Datos.            
                                                          
    Ubicación: Universidad de Burgos.         
*/  

#include <stdio.h>

int main(){
    int segundos;

    printf("Introduce el numero de segundos: ");

    scanf("%i", &segundos);

    int horas = segundos / 3600;
    int minutos = (segundos - horas*3600)/60;
    int segundos2 = segundos - horas*3600 - minutos*60;

    printf("%i %i %i", horas, minutos, segundos2);


    return 0;
}
