#include<stdio.h>
#include<stdlib.h>
#define MAX 1000

void leer_calorias(int *a, int tam);
float promedio_calorias(int *a, int tam);

int main(){
    int numeros[1000];//Declaacion de arreglo
    int *calorias;      //Declaracion del apuntador 
    int tamanno;


    printf("Ingresar la cantidad de dias que se registraran las calorias: \t");
    scanf("%d", &tamanno);

    calorias = (int *) malloc(tamanno * sizeof(int)); //Sirve para saber de  que tamano sera las variables|| malloc nos sirve para reservar espacio en memoria || Size of para saber el espacio de un tipo de dato

    if (calorias != NULL ) // Condicion para saber si el apuntador contiene un valor 
    {
        leer_calorias(calorias, tamanno);
        //float resultado = promedio_calorias();
        printf("\n EL promedio de calorias consumidas en %d dias, es de: %.2f", tamanno, promedio_calorias(calorias, tamanno));
    }else
    {
        printf("\nNo se accedio a la reserva de la memoria");
    }
return 0;
}



void leer_calorias(int *a, int tam){//Funcion para leer la cantidad de calorias consumidas dirigidas por el apuntador.
    for (int  i = 0; i < tam; i++)
    {
        printf("\nIngresa el consumo de calorias del dia %d: ", i+1);
        scanf("%d", &a[i]);
    }
}



float promedio_calorias(int *a, int tam){//Calcular el promedio de calorias consumidas
    float suma=0;
    for (int i = 0; i < tam; i++)
    {
        suma += *(a+i);
    }
    return (suma/ tam);
}