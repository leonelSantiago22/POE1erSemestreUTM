#include<stdio.h>
#include<stdlib.h>


int main(){
    float *numero = NULL;
    int tamanno; 

    printf("Ingrese el tamanno: \t");
    scanf("%d", &tamanno);

    for (int  i = 0; i <= 10000; i++)
    {
        numero = (float *) malloc(tamanno * sizeof(float));// Generar el espacio de memeoria 
    }
    
    free(numero);// Se utiliza para borrar el espacio de memoria asignado. 
    getchar(); getchar();
}