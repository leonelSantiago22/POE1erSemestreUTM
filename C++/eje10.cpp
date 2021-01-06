#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>
#include <ostream>
using namespace std;
int main()
{
    int ventasmas=0, vestasmenos20=0, op, venta=0, suma=0, totalventas=0 , vendedor=1, ventavendedor=0, mayor=0, vendedormayor=0;

    do
    {
       
        while (op!=2)
        {
         printf("\nVendedor #%d", vendedor-1);
        printf("\nIngresa la cantidad de la venta: \t");
        scanf("%d", &venta);
        if (venta<=10000)
            ventasmas ++;
        else if(venta>10000 && venta<=20000)
            vestasmenos20++;
        
        suma+=venta;
        
        printf("Deseas ingresar una nueva venta 1=si 2=no");
        scanf("%d", &op);
         totalventas++;
        }
        ventavendedor = suma;
        printf("\nDeseas ingresar una nuevo vendedor?  1=si 2=no");
        scanf("%d", &op);
       
        if (suma>mayor)
        {
            mayor = vendedormayor;
            vendedormayor = vendedor-1;
        }
         vendedor ++;
    }while (op!=2);

    printf("\nTotal de ventas:\t%d", totalventas);
    printf("\nVentas por menos de 10000 \t:%d", ventasmas);
    printf("\nVentas por mas de 10000 y menos de 20000\t:%d", vestasmenos20);
    printf("\nToTal de las ventas %d:", suma);
    printf("\nEl vendedor que mas vendio: %d", vendedormayor);
    

    getchar(); getchar();
    return 0;
}