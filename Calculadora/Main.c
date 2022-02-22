/*                                                      
    Author: Adrián Núñez Martínez                          
                                                           
    Purpose:  Ejercicios de Funciones.            
                                                          
    Ubicación: Universidad de Burgos.         
*/  

#include <stdio.h>

int sumar(int num1, int num2);
int resta(int num1, int num2);
int multiplicar(int num1, int num2);
int dividir(int num1, int num2);

int main(){

    int parametro1;
    int parametro2;
    printf("Introduce el primer operando: ");
    scanf("%i", &parametro1);
    printf("Introduce el segundo parámetro: ");
    scanf("%i", &parametro2);
    printf("Resultado de la suma : ");
    sumar(parametro1, parametro2);
    printf("Resultado de la resta : ");
    resta(parametro1, parametro2);
    printf("Resultado de la multiplicación : ");
    multiplicar(parametro1, parametro2);
    printf("Resultado de la división : ");
    dividir(parametro1, parametro2);

    return 0;
}

int sumar(int num1, int num2) {

   double result;
 
   result = num1 + num2;
 
   return printf("%f\n",result); 
}
int resta(int num1, int num2) {

   double result;
 
   result = num1 - num2;
 
   return printf("%f\n",result); 
}
int multiplicar(int num1, int num2) {

   double result;
 
   result = num1 * num2;
 
   return printf("%f\n",result); 
}
int dividir(int num1, int num2) {

   double result;
 
   result = num1 / num2;
 
   return printf("%f\n",result); 
}