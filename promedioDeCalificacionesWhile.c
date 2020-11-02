/*Realice un programa que calcule el promedio de calificaciones (Escala de 0 a 100)
de un numero arbitrario de alumnos*/

#include<stdio.h>
#include<stdlib.h>
#include <conio.h>
int cal, i, suma;
float pro;
int main (){ 
     i = 0; suma = 0;
    while (cal!=-1){ 
       
        suma = suma + cal;
        printf("\n Ingrese una calificacion: (utiliza -1 para salir):");
        scanf("%d", &cal);
        i++;
        }
        pro = (float) suma / i;
    printf("El promedio es: %f \n", pro);
system("Pause");
getchar();
return 0;
}