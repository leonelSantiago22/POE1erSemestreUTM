//hacer un programa que lea 5 numeros enteros distintos y determine cual es el numero mayor 
#include <stdio.h>
#include <stdlib.h> 

    int n1,n2,n3,n4,n5; //declaracion de variables 

int main (int argc, char** argv){
    printf("Ingrese 5 numeros: \n"); //ingresamos los 5 numeros para comparar 
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    scanf("%d", &n4);
    scanf("%d", &n5);
    //comparar los numero por numero, 1 numero con los otros 4. 
    if(n1>n2 && n1>n3 && n1>n4 && n1>n5)    printf("El numero %d es el mayor \n", n1);  //Comparamos un numero con todos los numeros 

    if(n1<n2 && n2>n3 && n2>n4 && n2>n5)    printf("El numero %d es el mayor \n", n2);  //comparamos el segundo numero con los otros 4 

    if(n1<n3 && n2<n3 && n3>n4 && n3>n5)    printf("El numero %d es el mayor \n", n3);  //comparamos el tercer numero con los otros 4 

    if(n1<n4 && n2<n4 && n3<n4 && n4>n5)    printf("El numero %d es el mayor \n", n4);  //comparamos el cuarto numero con los otros 4

    if(n1<n5 && n2<n5 && n3<n5 && n4<n5)    printf("El numero %d es el mayor \n", n5);  //comparamos el cuarto numero con los otros 4 
    
    system("pause"); // retener la terminal 
    getchar(); //Pausar la terminal 
    return 0; 
    
}//llave de cierre 