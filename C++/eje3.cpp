#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>
#include <ostream>

using namespace std;

int main()
{
    int s=50,d=70,t=85,num, i=1, metodo, suma=0 ;
    float total;
    char tipo;
    printf("Ingresa el numero de hamburguesas que desea consumir: ");
    scanf("%d",&num);
    printf("Selecciona el metodo de pago: 1= Tarjeta 2= Efectivo :");
    scanf("%d", &metodo);
    do
    {
        printf("Ingrese el tipo de hamburguesa: s d y t\t:");
        scanf("%s", &tipo);
        switch (tipo)
        {
        case 's': suma += 50;break;
        case 'd': suma += 70; break;
        case 't': suma += 85; break;
        default: i-=1;
            break;
        }
        i++;
    } while (i<=num);

   int g = suma; 
   if (metodo =1)
   {
        suma *= .10;
        total =(float) g + suma;
   }else 
   {
       total = (float) suma;
   }
   
   printf("Total a pagar: %.2lf", total);
    
    getchar(); getchar();
    return 0;
}