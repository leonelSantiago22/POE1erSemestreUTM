/*
Nombre: Leonel Santiago Rosas del 102-A, Ing. en Computacion
Programa 1. 
*/
/* ***ADVERTENCIA**** Solo se pude modificar aquello que esta marcado entre comentarios como modificable */

#include <stdio.h>

/* 1. Declara el prototipo de una función llamada cubíco
 */
/* ***************************************************************************************
    Solo se puede moficar la línea siguiente*/
int cubico(int numero);
/*  Solo se puede moficar la línea anterior 
****************************************************************************************/

int main(void){

    int numero = 5;
    printf("El volumen del cubo de lado %d", numero);
/* 3. Llame a la función cubíco
*/
/* ***************************************************************************************
    Solo se puede modificar la línea siguiente*/
    numero = cubico(numero);
/*  Solo se puede modificar la línea anterior 
****************************************************************************************/
    printf(" es: %d\n",numero);
}


/* 2. Define la función cubíco, que calcule el volumen del cubo*/
/* ***************************************************************************************
    Solo se puede modificar las líneas siguientes*/
int cubico(int numero){
    return numero*numero*numero;
}
/*  Solo se puede modificar las líneas anteriores 
****************************************************************************************/