#include <stdio.h>
#include <stdlib.h>

    int num1, num2; //declaracion de ambas variables 

int main (int argc, char** argv){
    //solicitamos los dos numeros enteros 
    printf("Introduzca dos numeros enteros : \n");
    scanf("%d", &num1);
    scanf("%d", &num2);

    //verificar que las relaciones se cumplan 

    if (num1 > num2)    printf("El primer numero %d es mayor que el segundo numero %d \n", num1, num2); //comparamos si el num1 es mayor que el num2 

    if (num1<num2)      printf("El primer numero %d es menor que el segundo numero %d \n", num1, num2); //comparamos si el num2 es menor que el num1 
        
    if (num1==num2)     printf("Los numero %d y %d son iguales \n", num2, num1);   // Comparamos si los numeros son iguales 
    
    if (num1>=num2)     printf("El primer numero %d es mayor o igual a %d \n", num1, num2); //comparamos si el numero es mayor eh igual
    
    if (num1<=num2)     printf("El primer numero %d es menor o igual a %d \n", num1, num2); //comparamos si el numero es menor o igual

    if (num1!=num2)     printf("Los numeros %d y %d son diferentes",num1, num2); //comprobamos si los numeros son diferentes
    
    
    system("pause");
    getchar();
    return 0;
            
}//llave de cierre 
