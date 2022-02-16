/*                                                      
    Author: Adrián Núñez Martínez                          
                                                           
    Purpose:  Ejercicios de Input y Datos.            
                                                          
    Ubicación: Universidad de Burgos.         
*/  

#include <stdio.h>

int main(){

    int numero0, numero1, numero2, numero3;

    printf("Introduce un valor : \n");
    scanf("%i %i %i %i", &numero0, &numero1, &numero2, &numero3);
    
    printf("\n%i %i\n--+--\n%i %i", numero0, numero2, numero1, numero3);
    printf("\n%i\n--\n%i", numero0 + numero2, numero1 + numero3);

    printf("\n%i %i\n--_--\n%i %i", numero0, numero1, numero2, numero3);
    printf("\n%i\n--\n%i", numero0 + numero2, numero1 + numero3);
    
    //printf("\n%i %i\n--*--\n%i %i", numero0, numero1, numero2, numero3);

    //printf("\n%i %i\n--/--\n%i %i", numero0, numero1, numero2, numero3);


    return 0;



    
}