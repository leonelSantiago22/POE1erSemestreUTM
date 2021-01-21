#include<stdlib.h>
#include<stdio.h>

int main() 
{
    int tiendas = 0, empleados = 0, generado=0, tiendasge=0, generadoto=0;

    printf("\n Cuantas sucursales son? \t:");
    scanf("%d", &tiendas);

    for (int i = 1; i <= tiendas; i++)
    {
        printf("\n tienda %d Ingresa la cantidad de empleados :", i);
        scanf("%d", &empleados);
        generadoto = 0, generado=0;
        for (int j = 1; j <= empleados; j++)
        {
            printf("\n Dime cuanto genero el empleado %d $:", j);
            scanf("%d", &generado);
            generadoto+=generado;
        }
        tiendasge +=generadoto;
        system("cls");
        printf("\nTienda %d genero: %d ",i, generadoto);
    }

    printf("\nLo que generaron las tiendas en total = %d", tiendasge);
    
    getchar(); getchar();
    return 0;
}