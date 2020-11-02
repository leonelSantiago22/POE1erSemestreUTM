/* Escriba un programa en C que entren 3 numeros enteros diferentes del teclado, y a continuacion imprima 
la suma, el promedio del producto, el mas pequeno, el mas grande de estos numeros utilice la forma  de una seleccion 
del enunciado if.*/
#include <stdio.h>
#include <stdlib.h>

int num1, num2, num3;
int main(){

    printf("Ingrese 3 numeros: \n"); // solicitamos los 3 numeros 
    scanf("%d%d%d",&num1, &num2, &num3);

    printf("La suma es: %d \n", num1 + num2 + num3); //hacemos la suma de los 3  numeros 
    printf("El promedio es: %d \n", (num1+num2+num3)/3); // dividimos los 3 numeros 
    printf("El producto es : %d \n", num1 * num2 * num3);//multiplicamos los 3 numeros 

    if ( num1> num2 && num1 > num3) //la seccion para comparar que numero es el mayor
        printf("EL numero mas grande es: %d \n", num1);
    else if (num2 > num1 && num2>num2)
        printf("El numero mayor es: %d \n", num2);
    else if (num3> num1 && num3 > num2)
        printf("EL numero mas grande es: %d \n", num3);

    if(num1<num2 && num1<num3)
        printf("EL numero menor es: %d \n", num1);
    else if (num2<num1 && num2<num3)
        printf("EL numero menor es: %d \n", num2);
    else if (num3<num1 && num3<num2)
        printf("El numero menor es: %d \n", num3);

system("pause");
getchar();
return 0;     
}