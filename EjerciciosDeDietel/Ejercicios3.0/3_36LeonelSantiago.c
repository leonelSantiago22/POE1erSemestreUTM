/*
introduzca un entero que contenga solo 0s y 1s (es decir, un entero  "binario") e imprima su equivalencia decimal 

*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int i, digito; 
double bin, deci;
int main(){
    printf("Introduce un numero en binario (0s y 1s):");
    scanf("%lf", &bin);
    i = 0;
    deci = 0 ;
    while ((int)(bin/10)!=0){
        digito = (int) bin %10;
        deci = deci + digito * pow(2.0, i);
        i++;
        bin = (int)(bin/10);
    }
    deci = deci + bin * pow(2.0, i);
    printf("\n Decimal %d \n",(int)deci);
    system("pause");
    return 0;
}