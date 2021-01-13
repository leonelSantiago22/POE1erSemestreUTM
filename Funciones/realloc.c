#include<stdio.h>
#include<stdlib.h>


int main(){
    int *numeros;


    numeros = (int *) malloc(5* sizeof(int));//Asignamos el tamanio de la variable

    numeros[0] = 0;
    numeros[1] = 1;
    numeros[2] = 2;
    numeros[3] = 3;
    numeros[4] = 4;//Ocupamos la memoria


    numeros =(int *) realloc(numeros, 10 * sizeof(int));//realloc lleva como parametro, tienes que especificar e; apuntador actual, tienes que especificar el tamano. Asigna un nuevo espacio de memoria. 


    
    numeros[5] = 5;
    numeros[6] = 6;
    numeros[7] = 7;
    numeros[8] = 8;
    numeros[9] = 9;//Ocupamos la memoria


    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", numeros[i]);
    }
    
    return 0;

}