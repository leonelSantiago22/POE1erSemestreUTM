#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>
#include <ostream>
using namespace std;
int main()
{
    int producto, suma=0, r, op, sumatotal=0;
    while (op !=2){
         printf("Ingresa el coste del producto:\t");
         scanf("%d", &producto);
         r= producto;
         if (producto<100)
         {
             producto*=.10;
             suma = r - producto;
         }
         if (producto>=200)
         {
             producto*=.15;
             suma = r - producto;
         }
         if (producto>=100 && producto<200)
         {
            producto*=.12;
            suma = r -producto;
         }
         
        sumatotal +=suma;
         printf("Deseas ingresar Otro producto 1=si 2= no ");
         scanf("%d", &op);
    } 
   printf("total a pagar :\t%d", sumatotal);
   getchar(); getchar(); 
   return 0; 
} 