#include<stdlib.h>
#include<stdio.h>


int matricula;
char nombre[60];
float cal1 ,cal2, cal3, calfi;
int option=0;
void menu(), agregar_alumno(), mostrar_datos();
int main ()
{
    do{
    menu();
    printf("\n ingresa un opcion:");
    scanf("%d", &option);
    switch (option)
    {
    case 1: agregar_alumno(); break;
    case 2: break;
    case 3: mostrar_datos();break;
    case 4: option=4; break;
    default: printf("\nOpcion no valida\n");
    }
    }while(option!=4);

system("pause");
return 0;   
}

void menu(){
    printf("\n************Menu de opciones*******\n");
    printf("\n1- Agregar Datos Del alumno:");
    printf("\n2.- Modificar Datos Del alumno:");
    printf("\n3.- Motrar Datos Del alumno:");
    printf("\n4.-Salir \n");
}

void agregar_alumno(){
    printf("\nIngresa la Matricula: ");
    scanf("%d", &matricula);
    printf("\nInggresa el nombre :"); 
    scanf("%s", nombre);//una cadena de caracter no lleva '&'
    printf("\nIngresa La calificacion 1: ");
    scanf("%f", &cal1);
    printf("\nIngresa La calificacion 2: ");
    scanf("%f", &cal2);
    printf("\nIngresa La calificacion 3: ");
    scanf("%f", &cal3);
    printf("\nIngresa La calificacion Final: ");
    scanf("%f", &calfi);
}
void mostrar_datos(){
    printf("\n--------------Datos Del alumno---------\n")
    printf("\nMatricula: %d ",matricula);
    printf("\nNombre: %s", nombre);
    printf("\nCalificacion1: %.2f", cal1);
    printf("\nCalificacion2: %.2f", cal2);
    printf("\nCalificacion3: %.2f", cal3);
    printf("\nCalificacionFinal: %.2f \n", calfi);
}