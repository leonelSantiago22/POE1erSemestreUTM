/*
Realizar un programa que lea un numero arbitrario de calificaciones en formato de letras [A,B,C,D,F].
Despues del ingreso, debe resumir cuantas calificaciones fueron introducidas para cada letra 
*/
#include<stdio.h>
#include<stdlib.h>

char cal;
int a=0,b=0,c=0,d=0,e=0,f=0;
int main (){
    
        
        printf("\n Ingrese la calificacion[A,B,C,D,E,F](Ctrl + z to end): \n");
        while ((cal=getchar()) !=EOF){
            switch(cal){
                case 'A': case 'a': a++; break;
                case 'B': case 'b': b++; break;
                case 'C': case 'c': c++; break;
                case 'D': case 'd': d++; break;
                case 'E': case 'e': e++; break;
                case 'F': case 'f': f++; break;
                case '\n': case ' ': break; //es para ignorar cuando no ingresa ningun dato
                default: printf("Calificacion incorrecta. introduzca otra\n");
                break;
            }//fin switch
        }//fin while
    
    printf("El total de calificaciones es \n");
    printf("De A: %d ", a);
    printf("De B: %d ", b);
    printf("De C: %d ", c);
    printf("De D: %d ", d);
    printf("De E: %d ", e);
    printf("De F: %d \n", f);
system("pause");    
return 0;    
}