
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

struct tienda
{
    int identificador;
    char descripcion[20];
    int precio;
    int cantidad;
    int edad;
};

void ingresar();
void imprimir();
int cantidad;
struct tienda lista_juguetes[100];

int main(){
    int *jug;
    int op=0;
    printf("1.- Agregar productos: \t\n");
    printf("2.- Imprimir los productos\n");
    printf("3.- Salir\t\n: ");
    scanf("%d", &op);

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
                scanf("%d", &lista_juguetes[i].identificador);
                printf("\nDescripcion:");
                scanf("%s", lista_juguetes[i].descripcion);
                //fgets(juguetes[i].descripcion, 20, stdin);
                printf("\nQue precio tiene el juguete? \t:");
                scanf("%d", &lista_juguetes[i].precio);
                printf("\nCuantos productos hay en existencia ?\t:");
                scanf("%d", &lista_juguetes[i].cantidad);
                printf("\nEdad recomendada ?\t:");
                scanf("%d", &lista_juguetes[i].edad);
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
        printf("\nid: \t%d ", lista_juguetes[i].identificador);
        printf("\nCaracteristicas \t:%s ", lista_juguetes[i].descripcion);
        printf("\nprecio\t:%d pesos ", lista_juguetes[i].precio);
        printf("\nProductos en existencia \t:%d", lista_juguetes[i].cantidad);
        printf("\nEdad Recomendada %d en adelante\n\n\n", lista_juguetes[i].edad);
    }

    getchar(); getchar();
    main();
}