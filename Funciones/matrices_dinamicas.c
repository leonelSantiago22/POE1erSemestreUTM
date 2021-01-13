#include<stdlib.h>
#include<stdio.h>


int main(){
    float **temperaturas;//Declaracion de apuntador de apuntadores


    int tamanno_filas, tamanno_columnas;


    printf("\nIngrese la cantidad de dias que se registrara tempertaturas :");
    scanf("%d", &tamanno_filas);

    printf("\nIngrese cada cuantas horas se registraran temperaturas : ");
    scanf("%d", &tamanno_columnas);

    temperaturas = (float **) malloc (tamanno_filas * sizeof(float *));  //Se definen las filas 

    for (int  i = 0; i < tamanno_filas; i++)//Rellenamos con arreglos cada columna 
    {
        temperaturas[i] = (float *) malloc(tamanno_columnas * sizeof(float  )); 
    }
    
    return 0; 
}