#include<stdlib.h>
#include<stdio.h>
#include<string.h>
//para definir una funcion es #define MAx, lo que hace es que en toda parte del codigo define la variable con un valor contante. 
//no se debe de dejar espacio entre las funciones y el parametro a definir, nos genera un gasto de recurso. 
#define MAX 25
int matricula;
char nombre[60];
float cal1 ,cal2, cal3, calfi;
int option=0;
void menu_principal(), agregar_alumno(), mostrar_datos(), modificar();
int ma;
char nombre2[60];
int main (){
    do{
    getchar(); getchar();
    system("cls");
    menu_principal();
    printf("\n ingresa un opcion:");
    scanf("%d", &option);
    switch (option)
    {
    case 1: agregar_alumno(); break;
    case 2: modificar(); break;
    case 3: mostrar_datos(); break;
    case 4: option=4; break;
    default: printf("\nOpcion no valida\n");
    } 
    }while(option!=4);
system("pause");
return 0;   
}


void menu_principal(){//mostrar el menu 
    printf("\n************Menu de opciones*******\n");
    printf("\n1- Agregar Datos Del alumno:");
    printf("\n2.- Modificar los datos del alumno:");
    printf("\n3.-Mostrar los datos del alumno :");
    printf("\n4.-Salir \n");
}


void agregar_alumno(){// Agregar datos del alumno
    printf("\nIngresa la Matricula: ");
    scanf("%d", &matricula);
    printf("\nInggresa el nombre :"); 
    scanf("%s", nombre);//una cadena de caracter no lleva '&'
    printf("\n Las calificaciones son de rango [1-100]\n");
    printf("\nIngresa La calificacion 1: ");
    scanf("%f", &cal1);
    printf("\nIngresa La calificacion 2: ");
    scanf("%f", &cal2);
    printf("\nIngresa La calificacion 3: ");
    scanf("%f", &cal3);
    printf("\nIngresa La calificacion Final: ");
    scanf("%f", &calfi);
}


float promedio(float calfiacion1, float calificaion2, float califiacion3, float calfinal){//calcular el promedio 
    float calificacion_total=(cal1+cal2+cal3)/3;
    float calificacion = (calificacion_total + calfi)/2;
    return calificacion;
}


void mostrar_datos(){// para mostrar los datos en la pantalla
    printf("\n--------------Datos Del alumno---------\n");
    printf("\nMatricula: %d ",matricula);
    printf("\nNombre: %s", nombre);
    printf("\nCalificacion1: %.2f", cal1);
    printf("\nCalificacion2: %.2f", cal2);
    printf("\nCalificacion3: %.2f", cal3);
    printf("\nCalificacionFinal: %.2f \n", calfi);
    float prome = promedio(cal1, cal2, cal3, calfi);
    printf("\n El promedio : \t%.2f\n", prome);
}


void modificar(){
    char ncalf[10];
    printf("\nDeseas modificar  la  matricula?[S?N] la matricula actual es %d: ", matricula);
    scanf("%s", &ncalf);
    if (strcmp(ncalf, "S")==0 || strcmp(ncalf, "s")==0){//Para modificar la matricula 
        printf("\n ingrese la nueva matricula: ");
        scanf("%d", &matricula);
    }
    printf("\n Modificar tu nombre:[S/N] ");
    scanf("%s", nombre2);
    if ( strcmp(nombre2, "S")==0 || strcmp(nombre2, "s")==0 ){//modificar el nombre
        printf("\n Ingrese el nuevo nombre: ");
        scanf("%s", nombre);
    }
    printf("\n Desea modificar la calificacion 1?[S/N] es %.2f: ", cal1);
    scanf("%s", ncalf);
    if (strcmp(ncalf, "S")==0 || strcmp(ncalf, "s")==0){
        printf("\n ingrese la nueva calificacion: ");
        scanf("%f", &cal1);
    }
    printf("\n Desea modificar la calificacion 2?[S/N] es  %.2f :", cal2);
    scanf("%s", ncalf);
    if (strcmp(ncalf, "S")==0 || strcmp(ncalf, "s")==0){
        printf("\n ingrese la nueva calificacion: ");
        scanf("%f", &cal2);
    }
    printf("\n Desea modificar la calificacion 3?[S/N] es %.2f: ", cal3);
    scanf("%s", ncalf);
    if (strcmp(ncalf, "S")==0 || strcmp(ncalf, "s")==0){
        printf("\n ingrese la nueva calificacion: ");
        scanf("%f", &cal3);
    }
    printf("\n Desea modificar la calificacion final?[S/N] es %.2f: ", calfi);
    scanf("%s", ncalf);
    if (strcmp(ncalf, "S")==0 || strcmp(ncalf, "s")==0){
        printf("\n ingrese la nueva calificacion: ");
        scanf("%f", &calfi);
    }
}