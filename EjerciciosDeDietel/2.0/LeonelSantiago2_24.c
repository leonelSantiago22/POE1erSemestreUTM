/*
Escriba un programa que determine si es par o impar 
*/
#include<stdlib.h>
#include<stdio.h>

int num1;
int main(){

    printf("Ingresa un numero:");
    scanf("%d", &num1);

    if(num1 % 2) //comparamos a ver si es par o impar
        printf("\n el numero %d es impar \n", num1);
    else        //por tricotomia si no es la condicion anterior es esta condicion.
        printf("\n el numero %d es par \n", num1);
    


system("pause");
getchar();
return 0;
}