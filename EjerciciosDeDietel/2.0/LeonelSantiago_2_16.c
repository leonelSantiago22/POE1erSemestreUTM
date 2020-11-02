/* Ejercicio 2.16: Escriba un programa que solicite al usuario que introduzca dos numeros, tome los dos numeros, tome 
los dos numeros del usuario, e imprima la suma, el producto, la diferencia, el cociente y el modulo de los dos numeros 
*/

#include <stdio.h>
#include<stdlib.h>
int  num1, num2 ;

int main(){
    printf("Ingrese dos numeros: \n");
    scanf("%d%d", &num1, &num2);
    
    printf("Lon numeros %d y %d los resultados de sus operaciones son: \n la suma: %d\n el producto: %d \n la diferenacia:%d \n ",num1, num2,num1 + num2, num1 * num2, num1 - num2  );
    printf("El cociente:%d \n el modulo de: %d \n ", num1/num2, num1%num2 );

    system("pause");
    getchar();
    return 0;
}