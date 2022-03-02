#include <stdio.h>
#include <math.h>


int main(){
    
    enum dias {domingo, lunes, martes, miercoles, jueves, viernes, sabado};
    enum dias dia = domingo;

    printf("Dia %d %d %d %d %d %d %d", dia+1,dia+2,dia+3,dia+4,dia+5,dia+6,dia+7);
}
