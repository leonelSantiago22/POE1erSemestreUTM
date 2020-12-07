//Apuntadores
//
#include<stdio.h>
#include<stdlib.h>

int main(void){
    //Son las formas de declarar un apuntador, se le define in tipo de dato.
    //int *countPtr;
    //int *prtCount;
    //int *ptr_count;
    int *p_count;
    //int *count_p;
    
    p_count = &count; //Asginacion de una direccion o valor.

    printf("Conutd %d ", count );
    printf("p_count%d", *p_count);
    return 0;
}