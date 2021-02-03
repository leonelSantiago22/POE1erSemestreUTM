/*
Nombre:Leonel Santiago Rosas 
*/
/*
Intrucciones: Crear un programa para la gestión de una tienda de juguetes.

1.  Crear una estructura llamada juguete que contenga los siguientes elementos: 
identificador, descripción, costo, precio, cantidad, edad recomendada
2. Declarar  un arreglo de juguetes llamada lista_juguetes de tamaño dinámino
3. Al iniciar el programa solitar el número de juguetes a guardar
3. Crear un menu con dos opciones: agregar juguete y imprimir lista de juguetes
4. Implementar las opciones del menu (utilizar funciones para facilitar la lectura 
del programa)
*/
#include <stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define MAX cantidad

typedef struct tienda
{
    int identificador;
    char descripcion[20];
    int precio;
    int cantidad;
    int edad;
}lista_juguestes;

void ingresar();
void imprimir();
int cantidad;
//struct tienda lista_juguetes[100];

lista_juguestes *juguestes;

int main(){
    int *jug;
    int op=0;
    printf("1.- Agregar productos: \t\n");
    printf("2.- Imprimir los productos\n");
    printf("3.- Salir\t\n: ");
    scanf("%d", &op);

    juguestes  =  (lista_juguestes *) malloc(cantidad * sizeof(lista_juguestes*));
    do
    {
        switch (op)
        {
        case 1: ingresar(); break;
        case 2: imprimir(); break;
        }
    } while (op!=3);
    

    
}

void ingresar()
{
        printf("\nCuantos juguetes deseas ingresar?\t");
        scanf("%d", &cantidad);
        //struct tienda juguetes[cantidad];
        for (int i = 0; i <cantidad; i++)
            {
                printf("\nproducto numero\t%d", i+1);
                printf("\nIngresa su id \t:");
                scanf("%d", &juguestes[i].identificador);
                printf("\nDescripcion:");
                scanf("%s", juguestes[i].descripcion);
                //fgets(juguetes[i].descripcion, 20, stdin);
                printf("\nQue precio tiene el juguete? \t:");
                scanf("%d", &juguestes[i].precio);
                printf("\nCuantos productos hay en existencia ?\t:");
                scanf("%d", &juguestes[i].cantidad);
                printf("\nEdad recomendada ?\t:");
                scanf("%d", &juguestes[i].edad);
            }
    getchar(); getchar();
    main();
}

void imprimir()
{
    //struct tienda juguetes[cantidad];
    for (int  i = 0; i <cantidad; i++)
    {
        printf("\n\n\nJuguete numero %d", i+1);
        printf("\nid: \t%d ", juguestes[i].identificador);
        printf("\nCaracteristicas \t:%s ", juguestes[i].descripcion);
        printf("\nprecio\t:%d pesos ", juguestes[i].precio);
        printf("\nProductos en existencia \t:%d", juguestes[i].cantidad);
        printf("\nEdad Recomendada %d en adelante\n\n\n", juguestes[i].edad);
    }

    getchar(); getchar();
    main();
}