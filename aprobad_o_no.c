//es la clase del 22 de octubre del 2020 

//  Aprobado o no aprobado 

#include <stdio.h>
#include <stdlib.h>

    float a;

int main (){

    printf("Ingresa tu calificacion: ");
    scanf("%f", &a);

    if (a>=6)
    
        printf("******Felicidades aprobaste** \n");
    else
    
        printf("no aprobaste:'c \n");
    
    system("pause");
    getchar();
    return 0;

}//llave de cierre 