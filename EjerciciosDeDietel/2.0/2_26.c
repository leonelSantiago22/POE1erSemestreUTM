/*
Escriba un programa que ingrese 2 numeros enteros y determine e imprima si el primero es multiplo del segundo 
*/
#include<stdlib.h>
#include<stdio.h>
int num1, num2;

int main(){
        printf("****************Determinar su un numero es multiplo de otro******************** \n");
        printf("Inngresa 2 numeros: \n ");
        scanf("%d%d", &num1, &num2 );
        if(num1%num2) // con el % revisamos si es multiplo 
            printf("El numero %d es multiplo de %d \n", num1, num2);
        else //por tricotomia si no es la condicion es lo siguiente 
            printf("No es multiplo \n ");

system("pause");
getchar();
return 0;                
}