/*una persona invierte 1000 pesos en unos ahorros, que reditua un interes anual del 5% suponiendo que todo el interes se quede en deposito dentro de la cuenta, calcule e imprima la cantidad de dinero en la cuenta al final de cada anio durante 10 anios 
a = p (1 + r ) ^ n 

p = cantidad original 
r= tasa anual de interes
n= numero de anios 
a= cantidad que esta depositada al final del anio N */
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int main (){
    int p =1000;
    float r = .05, a, r,r1;
    for ( int i = 1; i <= 10; i++){
        a =(float) pow(p*(1+r),i);
        printf("Cantidad Depositada anio %d  cantida %f \n",i , p +a );
    }
return 0;
}