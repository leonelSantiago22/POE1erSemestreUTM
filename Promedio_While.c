/*26/10/2020, pcalcular un promedio con las calificaciones */

#include <stdio.h>
#include <stdlib.h>


int suma=0, cont=1, cal;
int  promedio;
int main(){

    printf("******Programa que obtiene el promedio****** ");

    while (cont<=10){
    printf("\n Ingrese un numero:");
    scanf("%d", &cal);
    suma= suma + cal ;
    ++cont;
    }
    promedio = suma / cont; 
    printf("EL pomedio es: %d \n", promedio);

    system("pause");
    getchar();
    return 0;
    
}