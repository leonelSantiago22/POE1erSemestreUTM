//Realizado el Miercoles 16 de septiembre de 2020
#include<stdlib.h>
#include<stdio.h>
#define ARRAY_SIZE 4

int main(){//Formas de acceder A los arreglos 
    
    int b[] = {10, 20, 30, 40}; //DeClaracion del arreglo. 

    int *b_ptr= b; // Se carga al apuntador lo que contiene la variable "b", ya lo carga directamente como arreglo.



    printf("Uso de indices para acceder al arreglo[0]= 10\n");
    for (int  i = 0; i <ARRAY_SIZE; i++)
    {
        printf("b[%d] = %d\n", i, b[i]);//Es la forma que imprime el arreglo el la posicion inicial.
    }




    puts("Uso De indirecciones para acceder al arreglo\n");//Utilizamos los apuntadores para imprimir lo que tiene el Arreglo 
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        printf("*(b + %d) = %d\n", i, *(b + i));// Preguntar que tiene la posicion 0 sumando el valor que tiene el indice(i)
    }



    

    int min = *(b + 0);//Declaramos que la posicion 0 es la minima con indireccion
    //Saber que posicion es la que contiene el numero minimo con indirecciones
    for (int  i = 1; i <ARRAY_SIZE; i++)
    {
        if (min > * (b+i))//Comprobamos si 0 sigue teniendo el numero minimo 
        {
            min = *(b+i);
        }  
    }



    int max = *(b + 0);//Declaramos que la posicion 0 es la maxima con indireccion
    //Saber que posicion es la que contiene el numero minimo con indirecciones
    for (int  i = 1; i <ARRAY_SIZE; i++)
    {
        if (max < * (b+i))//Comprobamos si 0 sigue teniendo el numero maximo 
        {
            max = *(b+i);
        }
    }



    printf("Uso de apuntadores para acceder al arreglo\n");
    for (int  i = 0; i < ARRAY_SIZE; i++)
    {
        printf("*b_ptr[%d] = %d\n", i, b_ptr[i]);//Declaro al apuntador que tiene cargado el arreglo, apunta a las posiciones que contiene el arreglo
    }




    printf("\nUSO de apuntadores en indirecciones para acceder al arreglo\n");
    for (int  i = 0; i <ARRAY_SIZE; i++)
    {
         printf("*b_ptr[%d] = %d\n", i, *(b_ptr+1));
    }




    printf("\nMinimo:\t%d", min);//Sabemos el valor minimo con indirreciones
    printf("\nMaximo:\t%d", max);//Valor de maximo con las indirecciones 
    return 0;


}