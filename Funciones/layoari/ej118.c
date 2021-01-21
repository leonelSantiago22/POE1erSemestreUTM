#include<stdlib.h>
#include<stdio.h>

int main() 
{
    int cont=0; 
    int alumnos=0, edad=0; 

    printf("\n Introduce la cantidad de alumnos: ");
    scanf("%d" ,&alumnos);
    
    for ( int i = 1; i <= alumnos; i++)
    {
        
        printf(" \n Introduce las edades: ");
        scanf("%d", &edad );
        cont += edad;
    }

    float total;
    total= cont / alumnos; 
    printf(" \n El promedio de edades de %d alumnos es: %.2f ", alumnos, total);

    
getchar(); getchar();
return 0;
}
