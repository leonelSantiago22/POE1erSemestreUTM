#include<stdio.h>
#include<stdlib.h>
#define MAX_ALUMNO 60
#define MAX_CALIFICACIONES 4
#define MAX_ASISTENCIAS 5




struct estudiante{  //Es la forma de declarar una estructura 
    int matricula;
    int nombre[MAX_ALUMNO];
    float calificaciones[MAX_ALUMNO];
    int asistensias[MAX_ASISTENCIAS];
}e5 = {456, "PedritoSola", {9.0, 8.9, 8.7, 7.7}, {1,0,1,1}};//Forma de inicializre la estructura

struct estudiante e1, e2, e3;//Definir las variables de la estructura 
struct estuadiante e4 = {123, "Juanpablo", {9.0, 8.9, 6.7, 9.7}, {1,0,1,1}};
//Forma de inicializar las estrucutras, se le asigna a las variables de la estructura estudiantes, de manera sucesiva
//Lo de arribla es una forma de inicializar la estructura


int main(){
    int numero= 1;
    int numeros[]={1,2,3,4,5};

    
    printf("\nEl tamanio (sixeof) de estudiante es: %lu\n",sizeof(e5));

    printf("\nIngresa la matricula\t:");
    scanf("%d", &e1.matricula);//Forma de escanear la variable de la estrucutura.

    printf("\nIngresa Nombre\t:");
    fgets(e1.nombre, MAX_ALUMNO, stdin);//Forma de escanear el nombre para que no genere espacio en el nombre

    for (int i = 0; i < MAX_CALIFICACIONES; i++)//Llenar el arreglo y las calificaciones 
    {
        printf("\nIngresar calificacion %d \t:", i+1);
        scanf("%f", &e1.calificaciones[i]);
    }
    
    for (int i = 0; i < MAX_ASISTENCIAS; i++)
    {
        printf("\nIngresar asistencia no.%d", i+1);
        scanf("%d", e1.asistensias[i]);
    }
    

    //Se especifica la posicion para guardar
    


    return 0;
}