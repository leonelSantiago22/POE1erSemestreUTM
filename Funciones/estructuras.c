#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_ALUMNO 60
#define MAX_CALIFICACIONES 4
#define MAX_ASISTENCIAS 5
//1/14/2020, Se agregan estructuras anidadas. 

struct direccion
{
    char calle[60];
    char ciudad[40];
    char estado[40];
    long int codigo_postal;
};

typedef struct direccion mi_direccion; //Sobre nombrar o poner un apodo con la funcion typedef
typedef int mi_integercito;
typedef struct estudiante mi_estudiante;

struct estudiante{  //Es la forma de declarar una estructura 
    int matricula;
    char nombre[MAX_ALUMNO];
    mi_direccion dir_estudiante;//Se manda a llamar la estructura estudiante.  
    float calificaciones[MAX_ALUMNO];
    int asistensias[MAX_ASISTENCIAS];
}e5 = {456, "PedritoSola", {9.0, 8.9, 8.7, 7.7, 9.8}, {1,1,0,1,1}};//Forma de inicializre la estructura


struct estudiante e1, e2, e3;//Definir las variables de la estructura 
struct estudiante e4 = {123, "Juanpablo", {9.0, 8.9, 6.7, 9.7, 6.5}, {1,1,0,1,1}};
//Forma de inicializar las estrucutras, se le asigna a las variables de la estructura estudiantes, de manera sucesiva
//Lo de arribla es una forma de inicializar la estructura

int il, i2, i3,i4;
int i[1000];

mi_estudiante grupo[100];//Almacena 100 elementos de tipo estudiante en la estructura estruct, guarda por ejemplo un estudiante con todas las variables de struct

int main(){
     mi_integercito= 1;
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
        printf("\nIngresar asistencia no. %d: ", i+1);
        scanf("%d", &e1.asistensias[i]);//Se especifica la posicion para guardar
    }
    
    printf("\nDatos del alumno:\t");
    printf("\nMatricula:\t %d", e1.matricula);
    printf("\nNombre:\t%s", e1.nombre);
    for (int  i = 0; i < MAX_CALIFICACIONES; i++)
    {
        printf("\nCalificacion #%d %.2lf", i+1, e1.calificaciones[i]);
    }
    printf("\n");
    for (int i = 0; i < MAX_ASISTENCIAS; i++)
    {
        printf("\nAsistencias :%d", e1.asistensias[i]);
    }
    
    
    
    e2.matricula= 123; //Forma de llenar las variables 
    strcpy(e2.nombre, "Carlos Gonzales");
    e2.calificaciones[0]=0.0;
    e2.calificaciones[1]=0.0;
    e2.calificaciones[2]=0.0;
    e2.calificaciones[3]=0.0;

    e2.asistensias [0] = 0;
    e2.asistensias [1] = 0;
    e2.asistensias [2] = 0;
    e2.asistensias [3] = 0;
    e2.asistensias [4] = 0;

    struct estudiante *p_e3; //Declaracion de un apuntador
    *p_e3 = e3;//Se llaman los valores a asignar sobre la variable 

    p_e3->matricula = 567; //Se declara el apuntador con los valores de las variables 
    strcpy(p_e3->nombre, "Jose garcia");
    p_e3->calificaciones[0] = 0.0;
    p_e3->asistensias [0] = 0;
    return 0;
}