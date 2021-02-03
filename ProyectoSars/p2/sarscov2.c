#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<conio.h>
#define MAX_CIUDADANOS cantidad


typedef struct sarscov2
{
    int     CURP;
    char    nombre[20];
    char    apellido_pa[20];
    char    apellido_ma[20];
    char    direccion[100];
    int     edad;
    char    estado[20];
    char    tipo_vacuna[30];


}pasciente;

void agregar_pasciente();
void imprimirtodos_pasciente();
int posicion_del_pasciente();
int  malloc_c();
int cantidad_pas();
pasciente *pascientes;

int cantidad = 0 ;


int main()
{
    int op=0;
    //pasciente *index;
    printf("\nIngresa una opcion del menu: \t");
    printf("\n1.-Agregar Pasciente");
    printf("\n2.-Imprimir Pascientes\n:");
    scanf("%d", &op);

    

    int c=1;
    if (c<=1)
    {
        printf("\nIngrese la cantidad de pascientes: ");
        scanf("%d", &cantidad);
        pascientes = (pasciente *) malloc(cantidad * sizeof(pascientes));
        
    }
    //pascientes = (pasciente *) malloc(cantidad * sizeof(pascientes));
    
    do
    {
        switch (op)
        {
        case 1:  agregar_pasciente(); c++; break;
        case 2:  imprimirtodos_pasciente(); break;
        }
    } while (op!=4);


return 0;

}

void agregar_pasciente()
{
    //printf("\nCuentos pascientes agregara doctor ? :");
    //scanf("%d", &cantidad);
    for (int  i = 0; i < cantidad; i++)
    {
        printf("\n\n\npasciente No:\t %d", i+1);
        printf("\nCual es la curp\t : ");
        scanf("%d", &pascientes[i].CURP);
    }

    main();
}






int posicion_del_pasciente(){//Funcion donde pedimos la posicion del pasciente 
    int posicion;
    printf("Indicar la posición del pasciente [1 - %d]:", MAX_CIUDADANOS);
    scanf("%d", &posicion);
    posicion--;//Reduce una posicion 
    return posicion;
}


/*int cantidad_pas()
{
    int correre;
    printf("Ingrese la cantidad de pascientes ");
    scanf("%d", &cantidad);

    //pascientes = (pasciente *) malloc(cantidad * sizeof(pascientes));
   
   //correre = malloc_c();

    //pascientes = correre;

    return pascientes;
}*/

void imprimirtodos_pasciente()
{
    //pascientes = (pasciente *) malloc(cantidad * sizeof(pascientes));
    for (int  i = 0; i < cantidad; i++)
    {
        printf("\nCurp : %d", pascientes[i].CURP);
    }
    getchar(); getchar();
    main();
}

/*int  malloc_c()
{
    pascientes = (pasciente *) malloc(cantidad * sizeof(pascientes));
    return pascientes;
}*/