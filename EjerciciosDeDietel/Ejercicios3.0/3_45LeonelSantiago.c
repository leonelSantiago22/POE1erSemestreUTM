/*Escriba un programa que lea tres no ceros y que determine e imprima 
si pueden ser los lados de un triangulo rectangulo 
1- lo primero que hago es saber que lado es la hipotenusa osea el lado mas grande 
2- un triangulo rectangulo es cuando 2 lados elevados da la hipotenusa elevada al cuadrado 
*/

#include<stdio.h>
#include <stdlib.h>
#include <math.h>
int a,b,c, r, r2;

int main(){
    printf("Ingresa un lado a para el triangulo:");
    scanf("%d", &a);
    printf("\nIngresa un lado b para el triangulo:");
    scanf("%d", &b);
    printf("\nIngresa un lado c para el triangulo:");
    scanf("%d", &c);

    if (a>b && a>c){
            r=pow(b,2.0)+ pow(c,2.0);
            r2=pow(a,2.0);
            if(r==r2)
                printf("Es un triangulo Rectangulo \n");
            else
                printf("No es un triangulo rectangulo\n");    

    } else if (b>a && b>c){
             r= pow(a,2.0)+ pow(c,2.0);
            r2=pow(b,2.0);
            if(r==r2)
                printf("Es un triangulo Rectangulo \n");
            else
                printf("No es un triangulo rectangulo\n"); 

    }else if (c>a && c>b){
             r= pow(a,2.0)+ pow(b,2.0);
            r2=pow(c,2.0);
            if(r==r2)
                printf("Es un triangulo Rectangulo \n");
            else
                printf("No es un triangulo rectangulo\n"); 
    }
system("pause");
return 0;
}