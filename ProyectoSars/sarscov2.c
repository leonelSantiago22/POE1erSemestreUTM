#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h> 
//Definicion de los Parametros. 
#define MAX_CiUDADANOS 3
#define MAX_NOM     60
//Declaramos los parametros y los datos de los pascientes 
int     curp[MAX_NOM]={12345, 123456, 123456};
char    nombres[MAX_CiUDADANOS][MAX_NOM] = {"Leonel Santiago", "Dulce Maria", "Rosa Maria"};
char    estado[MAX_CiUDADANOS][MAX_NOM]={"Contagiado-leve", "Contagiado-En entubacion", "Recuperado"};
char    tratamiento[MAX_CiUDADANOS][MAX_NOM]={"Efectivo", "No Efectivo", "Altamente Efectivo"};
int     edad[MAX_CiUDADANOS]= {18, 25, 65};
char    fecha_entrada[MAX_CiUDADANOS][MAX_NOM]={"12/14/2020", "11/11/2020", "13/10/2020"};
//Declaracion De los datos adicionales
char    direccion[MAX_CiUDADANOS][MAX_NOM]={"Calle Emiliano zapata s/n Barrio San Batolo", "El miirador Barrio San Diego", "San pedro"};
int     integrantes_familiares[MAX_CiUDADANOS]={5, 7, 8};
int     densidad_poblacion[MAX_CiUDADANOS]= {100, 140, 50};
//Declaracion de Funciones a ocupar
void    Imprimir_pascientes(int posicion);//Declaracion de la funcion que imprime los datos de los pasientes
int     posicion_del_pasciente();// Conocer la posicion del pasciente declaracion de la funcion
void    datos_adicionales(int posicion);
void    todos_los_pascientes();
void    modificar_datos();
void    pascientes_imprimir();
//Funciones que modifican los datos
void    modificar_datos_nombre(); 
void    modificar_datos_curp();
void    modificar_datos_edad();
void    modificar_datos_estado();
void    modificar_datos_integrantes();
void    modificar_datos_direccion();
void    modificar_datos_efectividad();


int main(){//Main significa que es La "Funcion principal"
    int n=0, index;
    system("cls");
    getchar();
    printf("\nBienvenido doctor!! Que desea hacer?");
    printf("\n1:Imprimir Datos de los pascientes.");
    printf("\n2:Datos De los pascietes adicionales.");
    printf("\n3:Imprimir todos los pasientes.");
    printf("\n4:Modificar datos del pasciente.");
    printf("\n5:Salir");
    printf("\n: \t");
    scanf("%d", &n);
    do
    {   
        switch (n)//Seleccion de opciones para dirigirlos hacia ellos
        {
        case 1: index = posicion_del_pasciente(); 
                Imprimir_pascientes(index); 
                break;
        case 2: index = posicion_del_pasciente();
                datos_adicionales(index); 
                break;
        case 3: todos_los_pascientes();
                break;
        case 4: modificar_datos();
                break;
        case 5: exit(-1); break;// caso para salir
        }
    } while (n!=10);

    printf("\n Recuerda que no se guardan los cambios hechos ");
    printf("\n Espero verte pronto\n");
    system("Pause");
    return 0;
}


void Imprimir_pascientes(int posicion){ //1.-Funcion que Permite moostrar al pasciente
    system("cls");
    printf("\nCurp:                 \t%d", curp[posicion]);
    printf("\nNombre:               \t%s", nombres[posicion]);
    printf("\nFecha de entrada      \t%s", fecha_entrada[posicion]);
    printf("\nEstado Del pasciente: \t%s", estado[posicion]);
    printf("\nEdad:                 \t%d", edad[posicion]);
    printf("\nEfectividad del tratamiento:\t%s", tratamiento[posicion]);
    getchar(); getchar();
    main();
}

int posicion_del_pasciente(){//Funcion donde pedimos la posicion del pasciente 
    int posicion;
    printf("Indicar la posición del pasciente [1 - %d]:", MAX_CiUDADANOS);
    scanf("%d", &posicion);
    posicion--;//Reduce una posicion 
    return posicion;
}

void datos_adicionales(int posicion){//2.-Funciones para imprimir los datos del pasciente
    system("cls");
    printf("\nCurp:                 \t %d", curp[posicion]);
    printf("\nNombre del pasciente: \t %s", nombres[posicion]);
    printf("\nVive en:              \t %s", direccion[posicion]);
    printf("\nSu familia son:       \t %d", integrantes_familiares[posicion]);
    printf("\nDensidad de poblacion:\t %d", densidad_poblacion[posicion]);

    int d=densidad_poblacion[posicion], c=densidad_poblacion[posicion];

    float k = (d/c)*.154;
    if (d<=100)
    {
        printf("\n!!Zona De precaucion!!");
        printf("\nYa que la densidad de poblacion es facil de contagiar");
        printf("\nAnadiendo que su familia de %d se hace facil el cotagio", integrantes_familiares[posicion]);
        printf("\nSe espera un aumento en casos de %.2f porciento", k );
    }
    printf("\n:");
    getchar(); getchar();
    main();
}

void todos_los_pascientes(){//3Funcion para imprimir todos los pascientes
    system("cls");
    printf("\n Casos Confirmados %d", MAX_CiUDADANOS);
    for (int  i = 1 ; i<=MAX_CiUDADANOS; i++)//Ciclo For para imprimir todos los pascientes
    {
    printf("\nposicion: %d", i);
    printf("\nCurp:                \t%d",   curp[i-1]);
    printf("\nNombre:              \t%s",   nombres[i-1]);
    printf("\nEstado Del pasciente:\t%s",   estado[i-1]);
    printf("\nEdad                  \t%d\n",edad[i-1]);
    }
    getchar(); getchar();
    main();
}


void pascientes_imprimir(){
    system("cls");
    printf("\n Casos Confirmados %d", MAX_CiUDADANOS);
    for (int  i = 1 ; i<=MAX_CiUDADANOS; i++)//Ciclo For para imprimir todos los pascientes
    {
    printf("\nposicion: %d", i);
    printf("\nCurp:                \t%d",   curp[i-1]);
    printf("\nNombre:              \t%s",   nombres[i-1]);
    printf("\nEstado Del pasciente:\t%s",   estado[i-1]);
    printf("\nEdad                  \t%d",  edad[i-1]);
    printf("\nNum. de Familiares    \t%d",  integrantes_familiares[i-1]);
    printf("\nDireccion:            \t%s",  direccion[i-1]);
    printf("\nEfectividad del tratamiento: \t%s\n", tratamiento[i-1]);
    }
    getchar(); getchar();

}



void modificar_datos(){//Menu para modificar Datos del pasciente
    system("cls");
    int op;
    printf("\nQue desea modificar del pasciente?? ");
    printf("\n1.- El nombre");
    printf("\n2.- Curp");
    printf("\n3.- Edad");
    printf("\n4.- Estado del pasciente");
    printf("\n5.- Integrantes de su familia");
    printf("\n6.- Direccion");
    printf("\n7.- El Estado de efectividad");
    printf("\n8.- Salir");
    printf("\n: \t");
    scanf("%d", &op);
    do
    {
        switch (op)
        {
        case 1:  modificar_datos_nombre();      break;
        case 2:  modificar_datos_curp();        break;
        case 3:  modificar_datos_edad();        break;
        case 4:  modificar_datos_estado();      break;
        case 5:  modificar_datos_integrantes(); break;
        case 6:  modificar_datos_direccion();   break;
        case 7:  modificar_datos_efectividad(); break;
        case 8:op=8;       
        }
    } while (op!=8);
    getchar(); getchar();
    main();
}

//Inicio de las funciones de modificacion
void modificar_datos_nombre(){
    int posicion;
    puts("Menu para modificar nombre del Pasciente.");
    pascientes_imprimir();
    printf("Indica la posicion [1 - %d]:", MAX_CiUDADANOS);
    scanf("%d", &posicion);
    printf("Nombre actual: %s\n", nombres[posicion - 1]);
    fflush(stdin);
    puts("Ingresar nombre: ");
    gets(nombres[posicion - 1]);
    getchar();
    modificar_datos();
}
void modificar_datos_curp(){//Modificar los datos de la curp de cada pasciente
    int posicion;
    puts("Menu para modificar curp del Pasciente.");
    pascientes_imprimir();
    printf("Indica la posicion [1 - %d]:", MAX_CiUDADANOS);
    scanf("%d", &posicion);
    printf("Curp actual: %d\n", curp[posicion - 1]);
    printf("\nIngresa La nueva curp: ");
    scanf("%d", &curp[posicion-1]);
    getchar();
    modificar_datos();
}

void modificar_datos_edad(){
    int posicion;
    puts("Menu para modificar la edad  del Pasciente.");
    pascientes_imprimir();
    printf("Indica la posicion [1 - %d]:", MAX_CiUDADANOS);
    scanf("%d", &posicion);
    printf("Edad actual: %d\n", curp[posicion - 1]);
    printf("\nIngresa La nueva curp: ");
    scanf("%d", &curp[posicion-1]);
    getchar();
    modificar_datos();
}

void  modificar_datos_estado(){
    int posicion;
    puts("Menu para modificar Estado del Pasciente.");
    pascientes_imprimir();
    printf("Indica la posicion [1 - %d]:", MAX_CiUDADANOS);
    scanf("%d", &posicion);
    printf("Estado actual: %s\n", estado[posicion - 1]);
    fflush(stdin);
    puts("Ingresar nombre: ");
    gets(estado[posicion - 1]);
    getchar();
    modificar_datos();
}

void modificar_datos_integrantes(){
    int posicion;
    puts("Menu para modificar la cantidad de integrantes   del Pasciente.");
    pascientes_imprimir();
    printf("Indica la posicion [1 - %d]:", MAX_CiUDADANOS);
    scanf("%d", &posicion);
    printf("curp actual: %d\n", curp[posicion - 1]);
    printf("\nIngresa La nueva curp: ");
    scanf("%d", &curp[posicion-1]);
    getchar();
    modificar_datos();
}
void modificar_datos_direccion(){
    int posicion;
    puts("Menu para modificar la direccion del Pasciente.");
    pascientes_imprimir();
    printf("Indica la posicion [1 - %d]:", MAX_CiUDADANOS);
    scanf("%d", &posicion);
    printf("Direccion actual: %s\n", direccion[posicion - 1]);
    fflush(stdin);
    puts("Ingresar nombre: ");
    gets(direccion[posicion - 1]);
    getchar();
    modificar_datos();
}
void modificar_datos_efectividad(){
    int posicion;
    puts("Menu para modificar la Efectividad del trantamiento del Pasciente.");
    pascientes_imprimir();
    printf("Indica la posicion [1 - %d]:", MAX_CiUDADANOS);
    scanf("%d", &posicion);
    printf("Efectividad actual: %s\n", tratamiento[posicion - 1]);
    fflush(stdin);
    puts("Ingresar nombre: ");
    gets(tratamiento[posicion - 1]);
    getchar();
    modificar_datos();
}
//Fin de las funciones de modificacion