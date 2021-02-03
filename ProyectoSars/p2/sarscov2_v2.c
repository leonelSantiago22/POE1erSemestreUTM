//Hecho por: Leonel Santiago Rosas Git: LeonelSantiago22, ing. Computacion UTM, 01/02/2020
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#define MAX_CIUDADANOS cantidad
int posicion_del_pasciente();
void agregar_pasciente();
void imprimirtodos_pasciente();
void buscar_pasciente(int posicion);
int  tipo_vacuna(int posicion);
//Llamadas para la modificacion
void modificaciones();
void curp(int posicion);
void nombre(int posicion);
void apellido_pa(int posicion);
void apellido_ma(int posicion);
void direccion(int posicion);
void edad(int posicion);
void estado(int posicion);
void tipode_vacuna(int posicion);
void sexo(int posicion);
void funcionamiento(int posicion);
void inmunidad(int posicion);
void especificaciones(int posicion);



struct vacunas
{
    char funcionamiento[20];
    char inmunidad[30];
    char especificiones[100];
};


 struct pasciente
{
    int     CURP;
    char    nombre[20];
    char    apellido_pa[20];
    char    apellido_ma[20];
    char    direccion[100];
    int     edad;
    char    estado[20];
    char    tipo_vacuna[30];
    char    sexo[20];
    struct vacunas espe_vacunas;
};



typedef struct vacunas tipo_vacunas;

struct pasciente num_pascientes[10000];
int cantidad;
int sn[1000];

int main()
{
    system("cls");
    int op=0, index;
    printf("\nIngresa una opcion del menu: \t");
    printf("\n1.-Agregar Pasciente");
    printf("\n2.-Imprimir Pascientes");
    printf("\n3.-Buscar pasciente: ");
    printf("\n4.-Modificaciones");
    printf("\n5.-salir\n:");
    scanf("%d", &op);

    //pascientes = (pasciente *) malloc(cantidad * sizeof(pascientes));

    do
    {
        switch (op)
        {
        case 1: agregar_pasciente(); break;
        case 2: imprimirtodos_pasciente(); break;
        case 3: index = posicion_del_pasciente();
                    buscar_pasciente(index);break;
        case 4: modificaciones();            
        case 5: exit(-1); break;           
        default: printf("\n\n\n\n Opcion invalida"); main();

        }
    } while (op!=5);


return 0;   
}

void agregar_pasciente()
{
    //int sn;
    printf("\nCuentos pascientes agregara doctor ? :");
    scanf("%d", &cantidad);
    char nombre_temporal[100]=" ";
    for (int  i = 0; i < cantidad; i++)
    {
        printf("\n\n\npasciente No:\t %d", i+1);
        printf("\nCual es la curp\t : ");
        scanf("%d", &num_pascientes[i].CURP);
        printf("\nIngresa su primer nombre \t :");
        fflush(stdin);
        gets(num_pascientes[i].nombre);
        printf("\nIngresa su apellido paterno \t :");
        fflush(stdin);
        gets(num_pascientes[i].apellido_pa);
        printf("\nIngresa su apellido materno \t: ");
         fflush(stdin);
        gets(num_pascientes[i].apellido_ma);
        printf("\n Cual es su direccion ?\t: ");
        fflush(stdin);
        gets(num_pascientes[i].direccion);
        printf("\n Cual es la edad del pasciente ?\t:");
        scanf("%d", &num_pascientes[i].edad);
        printf("\nEn que estado esta el pasciente ? \t:");
        fflush(stdin);
        gets(num_pascientes[i].estado);
        printf("\nSexo del pasciente  \t:");
        fflush(stdin);
        gets(num_pascientes[i].sexo);
        //printf("\nTipo de vacuna que recibio ?\t:");
        //scanf("%s", num_pascientes[i].tipo_vacuna);
        //fflush(stdin);
        //gets(num_pascientes[i].tipo_vacuna);
        printf("\n recibio vacuna ? 1 = s 2 = no: ");
        scanf("%d", &sn[i]);
        //scanf("%d", &sn);
        if (sn[i]==1)
        {
            tipo_vacuna(i);
            getchar(); getchar();
        }
        
    }

    main();
}

void imprimirtodos_pasciente()
{
    for (int  i = 0; i < cantidad; i++)
    {
        printf("\n\n\n Pasciente num %d", i+1);
        printf("\n Curp : %d", num_pascientes[i].CURP);
        printf("\n nombre \t: %s %s %s", num_pascientes[i].nombre, num_pascientes[i].apellido_pa, num_pascientes[i].apellido_ma);
        printf("\n Su direccion es : \t%s", num_pascientes[i].direccion);
        printf("\n Edad : %d", num_pascientes[i].edad);
        printf("\n Estado del pasciente: %s", num_pascientes[i].estado);
        printf("\nSexo del pasciente: %s", num_pascientes[i].sexo);
        if (sn[i]==1)
        {
            printf("\n Tipo de vacuna recibida %s", num_pascientes[i].tipo_vacuna);
            printf("\n Funcionamiento de la vacuna %s", num_pascientes[i].espe_vacunas.funcionamiento);
            printf("\n Notas sobre el pasciente:  %s", num_pascientes[i].espe_vacunas.especificiones);
            printf("\nGeneracion de inmunidad : %s", num_pascientes[i].espe_vacunas.inmunidad);
        }
    }
    getchar(); getchar();
    main();
}

int posicion_del_pasciente(){//Funcion donde pedimos la posicion del pasciente 
    int posicion;
    printf("Indicar la posición del pasciente [1 - %d]:", MAX_CIUDADANOS);
    scanf("%d", &posicion);
    posicion--;//Reduce una posicion 
    return posicion;
}

void buscar_pasciente(int posicion)
{
        printf("\n\n\n Pasciente num %d", posicion+1);
        printf("\n Curp : %d", num_pascientes[posicion].CURP);
        printf("\n nombre \t: %s %s %s", num_pascientes[posicion].nombre, num_pascientes[posicion].apellido_pa, num_pascientes[posicion].apellido_ma);
        printf("\n Su direccion es : \t%s", num_pascientes[posicion].direccion);
        printf("\n Edad : %d", num_pascientes[posicion].edad);
        printf("\n Estado del pasciente: %s", num_pascientes[posicion].estado);
        printf("\nSexo del pasciente: %s", num_pascientes[posicion].sexo);
        if (sn[posicion]==1)
        {
            printf("\n Tipo de vacuna recibida %s", num_pascientes[posicion].tipo_vacuna);
            printf("\n Funcionamiento de la vacuna %s", num_pascientes[posicion].espe_vacunas.funcionamiento);
            printf("\n Notas sobre el pasciente:  %s", num_pascientes[posicion].espe_vacunas.especificiones);
            printf("\nGeneracion de inmunidad : %s", num_pascientes[posicion].espe_vacunas.inmunidad);
        }

       getchar(); getchar();

       main(); 
}

int tipo_vacuna(int posicion)
{
        printf("\n De que farmaceutica ");
        fflush(stdin);
        gets(num_pascientes[posicion].tipo_vacuna);
        printf("\n el pasciente genero anticuerpos ? ");
        fflush(stdin);
        gets(num_pascientes[posicion].espe_vacunas.inmunidad);
        printf("\nEfectividad de la vacuna : ");
        fflush(stdin);
        gets(num_pascientes[posicion].espe_vacunas.funcionamiento);
        printf("\nAnotaciones sobre el pasciente: ");
        fflush(stdin);
        gets(num_pascientes[posicion].espe_vacunas.especificiones);
        getchar();
        return 0;
}

//Comienzan las modificaciones 
void modificaciones()
{
    int ops, index;
    system("cls");
    printf("\nBienvenido doctor al menu de modificaciones: ");
    printf("\n1.- Modificar la curp ");
    printf("\n2.- Modificar el nombre ");
    printf("\n3.- Modificar su apellido paterno");
    printf("\n4.- modificar su apellido Materno");
    printf("\n5.- Modificar la direccion");
    printf("\n6.- Modificar su edad ");
    printf("\n7.- Modificar su estado del pasciente ");
    printf("\n8.- Modificar su sexo");
    printf("\n9.- Modificar el tipo de vacuna aplicada ");
    printf("\n10.- Modificar el funcionamiento de la vacuna ");
    printf("\n11.-Modificar la inmunidad del pasciente ");
    printf("\n12.-Modificar las notas del pasciente");
    printf("\n13.-Salir\n:");
    scanf("%d", &ops);

    do
    {
        switch (ops)
        {
        case 1: index = posicion_del_pasciente(); curp(index);      break;
        case 2: index = posicion_del_pasciente(); nombre(index);         break;
        case 3: index = posicion_del_pasciente(); apellido_pa(index);    break;
        case 4: index = posicion_del_pasciente(); apellido_ma(index);    break;
        case 5: index = posicion_del_pasciente(); direccion(index);      break;
        case 6: index = posicion_del_pasciente(); edad(index);           break;
        case 7: index = posicion_del_pasciente(); estado(index);         break;
        case 8: index = posicion_del_pasciente(); sexo(index);           break;
        case 9: index = posicion_del_pasciente(); tipo_vacuna(index);    break;
        case 10: index = posicion_del_pasciente(); funcionamiento(index);break;
        case 11: index = posicion_del_pasciente(); inmunidad(index);     break;
        case 12: index = posicion_del_pasciente(); especificaciones(index); break;
        case 13: main(); break;
        default:
            break;
        }
    } while (ops !=4);
    
}

void curp(int posicion)
{
    printf("\nCurp Actual: %d \n Cual es la nueva ?\t: ",num_pascientes[posicion].CURP);
    scanf("%d", &num_pascientes[posicion].CURP);
    modificaciones();
}

void nombre(int posicion)
{
    printf("\nNombre actual \t: %s \nNombre Nuevo :", num_pascientes[posicion].nombre);
    fflush(stdin);
    gets(num_pascientes[posicion].nombre);
    modificaciones();
}

void apellido_pa(int posicion)
{
     printf("\nApellido paterno actual \t: %s \nApellido Nuevo :", num_pascientes[posicion].apellido_pa);
    fflush(stdin);
    gets(num_pascientes[posicion].apellido_pa);
    modificaciones();
}

void apellido_ma(int posicion)
{
    printf("\nApellido Materno  actual \t: %s \nApellido Nuevo :", num_pascientes[posicion].apellido_ma);
    fflush(stdin);
    gets(num_pascientes[posicion].apellido_ma);
    modificaciones();
}

void direccion(int posicion)
{
     printf("\nDireccion actual \t: %s \nDireccion Nuevo :", num_pascientes[posicion].direccion);
    fflush(stdin);
    gets(num_pascientes[posicion].nombre);
    modificaciones();
}

void edad(int posicion)
{
    printf("\nEdad Actual: %d \n Cual es la nueva edad ?\t: ",num_pascientes[posicion].edad);
    scanf("%d", &num_pascientes[posicion].edad);
    modificaciones();
}

void estado(int posicion)
{
     printf("\nEStado actual \t: %s \nEstado Nuevo :", num_pascientes[posicion].estado);
    fflush(stdin);
    gets(num_pascientes[posicion].estado);
    modificaciones();
}

void tipode_vacuna(int posicion)
{
     printf("\nTipo de vacuna actual \t: %s \n tipo de vacuna Nuevo :", num_pascientes[posicion].tipo_vacuna);
    fflush(stdin);
    gets(num_pascientes[posicion].tipo_vacuna);
    modificaciones();
}

void sexo(int posicion)
{
    printf("\nSexo actual \t: %s \nSexo Nuevo :", num_pascientes[posicion].sexo);
    fflush(stdin);
    gets(num_pascientes[posicion].sexo);
    modificaciones();
}

void funcionamiento(int posicion)
{
     printf("\nFuncionamiento actual \t: %s \n Nuevo Funcionamient:", num_pascientes[posicion].espe_vacunas.funcionamiento);
    fflush(stdin);
    gets(num_pascientes[posicion].espe_vacunas.funcionamiento);
    modificaciones();
}

void inmunidad(int posicion)
{
     printf("\n Inmunidad actual \t: %s \n Nueva Inmunidad :", num_pascientes[posicion].espe_vacunas.inmunidad);
    fflush(stdin);
    gets(num_pascientes[posicion].espe_vacunas.inmunidad);
    modificaciones();
}

void especificaciones(int posicion)
{
     printf("\nNombre actual \t: %s \nNombre Nuevo :", num_pascientes[posicion].espe_vacunas.especificiones);
    fflush(stdin);
    gets(num_pascientes[posicion].espe_vacunas.especificiones);
    modificaciones();
}
//Gracias por las clases hasta concluir el semestre, espero seguir avanzando para conertirme en un mejor programador <3 