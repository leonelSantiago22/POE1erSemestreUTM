#include <stdlib.h>
#include <stdio.h>

int main (){
    int matriculas[20];
    char nombre[20][60]; 
    int b[4][4]={ {1,1,1,1}, {2,2,2,2}, {3,3,3,3}, {4,4,4,4} }; //ya que son bidiminsionales se especifica por fira 
    //for(int i=0; i<20; i++){
      //  matriculas[i]=2020123001+ i;
        //nombre= "sin nombre";
   // }
    //acceder 
    /*for (int  i = 0; i <20 ; i++)
    {
        printf("\nLa matricula es: %d", matriculas[i]);
    }*/
    printf("\n Contenido de la matriz 4*4\n");
    for (int fila = 0; fila <4; fila++)//Hace referencia a las fila 
    {
        for (int columna = 0; columna < 4; columna++) //Hace referencia alas columnas 
        {
            printf("%d\t", b[fila][columna]);
        }
        printf("\n");
    }
    
  printf("\n Contenido de la matriz 4*4\n");
  int contador =1;
    for (int fila = 0; fila <4; fila++)//Hace referencia a las fila 
    {
        for (int columna = 0; columna < 4; columna++) //Hace referencia alas columnas 
        {
            b[fila][columna]= contador++;
            printf("%d\t",b[fila][columna]);
        }
        printf("\n");
    }
    return 0;
    system("pause");
}