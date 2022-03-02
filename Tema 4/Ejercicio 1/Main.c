#include <stdio.h>
#include <math.h>

    float perimetro (float, float);
    float area (float, float);
    void pide_diagonal (float *num1);

int main() {

    float diagonal = 0;
    float diagonal1 = 0;
    
    printf("Introduce la diagonal mayor.");
    pide_diagonal(&diagonal);
    
    printf("Introduce la diagonal menor.");
    pide_diagonal(&diagonal1);
    
    printf("El área es: %f, y el área es %f",area(diagonal, diagonal1), perimetro(diagonal, diagonal1)); 

    

    return 0;
}

float perimetro(float num1, float num2){

   return 2*sqrt(num2 + num1);

}
float area(float num1, float num2){

    return 0.5*num1*num2;

}
void pide_diagonal(float *num1){


    scanf("%f", num1);
    


}