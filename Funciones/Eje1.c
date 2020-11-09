#include<stdlib.h>
#include<stdio.h>
#include<string.h>


int matricula;
char nombre[60];
int cal1 ,cal2, cal3, calfi;
int option=0;
void menu(), agregar_alumno(), mostrar_datos(), modificar();
int ma;
char nombre2[60];



int main ()
{
    do{
    menu();
    printf("\n ingresa un opcion:");
    scanf("%d", &option);
    switch (option)
    {
    case 1: agregar_alumno(); break;
    case 2: mostrar_datos(); break;
    case 3: modificar();    break;
    case 4: option=4; break;
    default: printf("\nOpcion no valida\n");
    }
    }while(option!=4);

system("pause");
return 0;   
}




void menu(){//mostrar el menu 
    printf("\n************Menu de opciones*******\n");
    printf("\n1- Agregar Datos Del alumno:");
    printf("\n2.- Mostrar Datos Del alumno:");
    printf("\n3.- Modificar Datos Del alumno:");
    printf("\n4.-Salir \n");
}



void agregar_alumno(){// Agregar datos del alumno
    printf("\nIngresa la Matricula: ");
    scanf("%d", &matricula);
    printf("\nInggresa el nombre :"); 
    scanf("%s", nombre);//una cadena de caracter no lleva '&'
    printf("\n Las calificaciones son de rango [1-100]\n");
    printf("\nIngresa La calificacion 1: ");
    scanf("%d", &cal1);
    printf("\nIngresa La calificacion 2: ");
    scanf("%d", &cal2);
    printf("\nIngresa La calificacion 3: ");
    scanf("%d", &cal3);
    printf("\nIngresa La calificacion Final: ");
    scanf("%d", &calfi);
}



void mostrar_datos(){// para mostrar los datos en la pantalla
    printf("\n--------------Datos Del alumno---------\n");
    printf("\nMatricula: %d ",matricula);
    printf("\nNombre: %s", nombre);
    printf("\nCalificacion1: %d", cal1);
    printf("\nCalificacion2: %d", cal2);
    printf("\nCalificacion3: %d", cal3);
    printf("\nCalificacionFinal: %d \n", calfi);
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
    printf("\n Desea modificar la calificacion 1?[S/N] es %d: ", cal1);
    scanf("%s", ncalf);
    if (strcmp(ncalf, "S")==0 || strcmp(ncalf, "s")==0){
        printf("\n ingrese la nueva calificacion: ");
        scanf("%d", &cal1);
    }
    printf("\n Desea modificar la calificacion 2?[S/N] es  %d :", cal2);
    scanf("%s", ncalf);
    if (strcmp(ncalf, "S")==0 || strcmp(ncalf, "s")==0){
        printf("\n ingrese la nueva calificacion: ");
        scanf("%d", &cal2);
    }
    printf("\n Desea modificar la calificacion 3?[S/N] es %d: ", cal3);
    scanf("%s", ncalf);
    if (strcmp(ncalf, "S")==0 || strcmp(ncalf, "s")==0){
        printf("\n ingrese la nueva calificacion: ");
        scanf("%d", &cal3);
    }
    printf("\n Desea modificar la calificacion final?[S/N] es %d: ", calfi);
    scanf("%s", ncalf);
    if (strcmp(ncalf, "S")==0 || strcmp(ncalf, "s")==0){
        printf("\n ingrese la nueva calificacion: ");
        scanf("%d", &calfi);
    }
}