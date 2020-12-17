/*
Nombre: (Escribe tu nombre completo)
Programa 3. 
*/
/* ***ADVERTENCIA**** Solo se pude modificar aquello que esta marcado entre comentarios 
como modificable */

#include <stdio.h>
#include<stdlib.h>
#define MAX 5

/* 1. Declara el prototipo de una función llamada imprimir para un arreglo bidimensional
de entero de tamaño MAX x MAX*/
/* ***************************************************************************************
    Solo se puede moficar la línea siguiente*/
void imprimir(int matriz[MAX][MAX]);
/*  Solo se puede moficar la línea anterior 
****************************************************************************************/

int main(void){
    int matriz[MAX][MAX] = {{1,  2,  3,  4,  5}, 
                            {6,  7,  8,  9,  10},
                            {11, 12, 13, 14, 15}, 
                            {16, 17, 18, 19, 20}, 
                            {21, 22, 23, 24, 25}};
    imprimir(matriz);
}

/* 2. Define la función imprimir que muestre el contenido de la matriz con el siguiente orden
  5, 10, 15, 20, 25
  4,  9, 14, 19, 24
  3,  8  13, 18, 23
  2,  7, 12, 17, 22
  1,  6, 11, 16, 21*/
/* ***************************************************************************************
    Solo se puede modificar las líneas siguientes*/
void imprimir(int matriz[MAX][MAX]){
    for (int i = MAX-1; i>=0; i--)
    {
        for ( int j = 0 ; j<=MAX-1; j++)
        {
            printf("%d", matriz[j][i]);
            if (j<=3)
                printf(", ");
        }
        printf("\n");   
    }
    
}
/*  Solo se puede modificar las líneas anteriores 
****************************************************************************************/