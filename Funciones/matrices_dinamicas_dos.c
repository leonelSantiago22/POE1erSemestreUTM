#include<stdio.h>
#include<stdlib.h>

void leer_temperaturas(float **temperaturas, int f, int c );
void mostrar_temperatura(const float **temperaturas, int f, int c);

int main(){


   float **temperaturas= NULL;//Declaracion de apuntador de apuntadores


    int tamanno_filas, tamanno_columnas, frecuencia;


    printf("\nIngrese la cantidad de dias que se registrara tempertaturas :");
    scanf("%d", &tamanno_filas);

    printf("\nIngrese cada cuantas horas se registraran temperaturas al dia  : ");
    scanf("%d", &frecuencia);

    tamanno_columnas = 24 / frecuencia;

    temperaturas = (float **) malloc (tamanno_filas * sizeof(float *));  //Se definen las filas 

    if (temperaturas == NULL)
    {
        printf("\n No se pudo reservar la memoria....");
        return -1; 
    }
    

    for (int  i = 0; i < tamanno_filas; i++)//Rellenamos con arreglos cada columna 
    {
        temperaturas[i] = (float *) malloc(tamanno_columnas * sizeof(float));
        if (temperaturas [i] == NULL)
        {
            printf("\nNo se pudo reservar la memoria.");
            return -1;
        }
         
    }
    leer_temperaturas(temperaturas, tamanno_filas, tamanno_columnas);
    mostrar_temperatura(temperaturas, tamanno_filas, tamanno_columnas);
    return 0; 
}

void leer_temperaturas(float **temperaturas, int f, int c ){
    
    for (int  fila = 0; fila < f; fila++)
    {
        for (int  columnas = 0; columnas < c; columnas++)
        {
            printf("\nIngresa las temperaturas numero %d del dia %d: ", columnas+1, fila+1);
            scanf("%f", &temperaturas[fila][columnas]);
        }
        
    }
    
}

void mostrar_temperatura(const float **temperaturas, int f, int c){
    for (int i = 0; i < f; i++)
    {
        for (int  j= 0; j < c; j++)
        {
            printf("\n%.1lf", temperaturas[i][j]);
        }
        
    }
    
}