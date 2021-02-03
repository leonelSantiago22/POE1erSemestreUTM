#include<stdio.h>
#include<stdlib.h>
#define televitenes numero_tele
#define MAX_NOM 20

int main()
{
    int zonas[5], numero_tele[5], edades[5][100];
    char tipo_zonas [5][MAX_NOM]={"Zona antes de 14h", "Zona de 14 a 16h", "Zona de 16 a 20h", "Zona de 20 a 22", "Zona despues de 22h"};

    for (int  i = 0; i <5; i++)
    {
        printf("\n Ingrese el numero de televidentes de %s \t: ", tipo_zonas[i]);
        scanf("%d", &numero_tele[i]);

        for (int j = 0; j <numero_tele[i]; j++)
        {
            printf("\nIngresa la edad \t:");
            scanf("%d", &edades[i][j]);
        }
    }
    int mayor=0, menor=0;

    int mayoraudiencia= numero_tele[0];//Calcular mayor audiencia
    for (int  i = 1; i < 5; i++)
    {
        if (mayoraudiencia < numero_tele[i])
        {
            mayoraudiencia = numero_tele[i];
            mayor = i;
        }
        
    }

    int menoraudiencia= numero_tele[0];//Calcular menor audiencia 
    for (int  i = 1; i < 5; i++)
    {
        if (menoraudiencia >numero_tele[i])
        {
            menoraudiencia = numero_tele[i];
            menor =i;
        }
        
    }

   int  mayoredad =1000, menoredad=1;
    for (int i = 0; i < 5; i++)
    {
        for (int  j = 0; j < numero_tele[i]; i++)
        {
            if (edades[i][j]>menoredad)
            {
                menoredad = edades[i][j];
            }
            if (edades[i][j]<mayoredad)
            {
                mayoredad = edades[i][j];
            }
        }
        
    }
    int rango = mayoredad - menoredad;
    
    printf("\nZona menor es : %s su audiencia fue de :%d", tipo_zonas[menor], menoraudiencia);
    printf("\nZona mayor televidentes  es : %s, su audiencia fue :%d", tipo_zonas[menor], mayoraudiencia);  
    printf("\nRango de edades %d - %d es :%d ", mayoredad, menoredad, rango);

}