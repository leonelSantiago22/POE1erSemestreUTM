/*
Escriba un programa que entre un numero de cinco digitos, separe el numero en sus dijitos individuales e imprima los digitos separados unos de otros mediante tres espacios.
 */
#include<stdio.h>
#include<stdlib.h>

int numero, p1, p2, p3, p4, p5 ;
int main(){
    printf("Porfavor escribe un numero de 5 digitos para fragmentarlo: \n");
    scanf("%d", &numero);
    if ( numero>=10000 && numero<=99999 ){
        p1 = numero / 10000;
        p2=  (numero % 10000) / 1000;
        p3 = (numero % 10000) % 1000 / 100;
        p4 = ((numero % 10000) % 1000) % 100 / 10;
        p5 = (((numero % 10000) % 1000) % 100) % 10;
        printf("%d  %d  %d  %d  %d \n", p1, p2, p3, p4, p5); 
    }else{
        printf("No tiene 5 digitos \n");
    }   
system("pause");
getchar();
return 0;    
}