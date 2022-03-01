/*
    Author: Adrián Núñez Martínez

    Purpose:  Ejercicios de Funciones.

    Ubicación: Universidad de Burgos.
*/

#include <stdio.h>

void LeerNumero (int *num);
void EscribirResultado (int num1, int num2, char operador,float resultado);
void Sumar(int num1, int num2, int *suma);
void Resta(int num1, int num2, int *resta);
void Multiplicar(int num1, int num2, int *multiplicacion);
void Dividir(int num1, int num2, float *division);

int main()
{

   int parametro1 = 0;
   int parametro2 = 0;
   int resultado = 0;
   float resDiv = 0;
   
   
   LeerNumero(&parametro1);
   LeerNumero(&parametro2);
   

   Sumar(parametro1, parametro2, &resultado);
   
   EscribirResultado(parametro1, parametro2,(char)43,resultado);

   Resta(parametro1, parametro2, &resultado);
   
   EscribirResultado(parametro1, parametro2,(char)45,resultado);

   Multiplicar(parametro1, parametro2, &resultado);
   
   EscribirResultado(parametro1, parametro2,(char)42,resultado);

   Dividir(parametro1, parametro2, &resDiv);
   
   EscribirResultado(parametro1, parametro2,(char)47,resDiv);

   return 0;
}

void LeerNumero(int *num)
{
   printf("Introduce el operando : \n");
   scanf("%i", num);
}


void EscribirResultado (int num1, int num2, char operador,float resultado){
   
   printf("%i %c %i %f\n", num1, operador,num2,resultado);
}

void Sumar(int num1, int num2, int *suma){

   *suma = num1 + num2;
}
void Resta(int num1, int num2,int *resta)
{
   *resta = num1 - num2;

}
void Multiplicar(int num1, int num2, int *multiplicacion)
{

   *multiplicacion = num1 * num2;

}
void Dividir(int num1, int num2, float *division)
{
   if(num2 != 0){
      *division = num1 / num2;
   } else{
      printf("No se puede dividir entre cero.\n");
   }
   

}

