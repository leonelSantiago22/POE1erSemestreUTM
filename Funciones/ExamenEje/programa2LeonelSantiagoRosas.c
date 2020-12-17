/*
Nombre: Leonel Santiago Rosas del grupo 102-A Ing. en Computacion
Programa 2. 
*/
/* ***ADVERTENCIA**** Solo se pude modificar aquello que esta marcado entre comentarios 
como modificable */

#include <stdio.h>
#define MAX 10

/* 1. Declara el prototipo de una función llamada sumar que reciba un arreglo unidimensional 
de enteros de tamaño MAX*/
/* ***************************************************************************************
    Solo se puede moficar la línea siguiente*/
int sumar(int arreglo[MAX]);
/*  Solo se puede moficar la línea anterior 
****************************************************************************************/

/* 2. Declara el prototipo de una función llamada imprimir para un arreglo unidimensional
de entero de tamaño MAX*/
/* ***************************************************************************************
    Solo se puede moficar la línea siguiente*/
int imprimir(int arreglo[MAX]);
/*  Solo se puede moficar la línea anterior 
****************************************************************************************/

int main(void){
    int arreglo[MAX] = {1, 11, 22, 33, 44, 55, 66, 77, 88, 99};
    printf("Arreglo inicial: ");
    imprimir(arreglo);
    printf("\nArreglo final: ");
    sumar(arreglo);
    imprimir(arreglo);
    printf("\n");
}

/* 3. Define la función sumar que sume la posicion n con n+1 y la signe en n. 
Ejemplo sumar la posicion 0 con la 1 y almancenar en 0, sumar la posició uno con la 2 y
almacenar en 1, etc... sumar la posición 9 con la 0 (esta ultima posición se suma con 
la primera) y almacenar en 9*/
/* ***************************************************************************************
    Solo se puede modificar las líneas siguientes*/
int  sumar(int arreglo[MAX]){
    int i, sumai=0;
    for (i=0; i<MAX; i++){
        //Solo puede declar una sentencia dentro del for 
        arreglo [i%MAX] = arreglo[i%MAX] + arreglo[(i + 1)%MAX];
        //arreglo[0%9] = arreglo[0] + arreglo[1];
        //arreglo[9%10] = arreglo[9] + arreglo[0];
    }
}
/*  Solo se puede modificar las líneas anteriores 
****************************************************************************************/


/* 4. Define la función imprimir que muestre el contenido de un arreglo con el siguente
formato, 1, 2, 3, 4, 5, ..., 998, 999, 1000. (separados por coma, el último elemento debe 
tener un punto */
/* ***************************************************************************************
    Solo se puede modificar las líneas siguientes*/
int imprimir(int arreglo[MAX]){
    for (int i = 0; i <=9 ; i++)
    {
        printf("%d", arreglo[i]);
        if (i<=8)
            printf(",");
        if(i==9)
            printf(".");
        
    }
    
}
/*  Solo se puede modificar las líneas anteriores 
****************************************************************************************/