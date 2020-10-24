//dado un ano cualquiera, el programa determinar si el ano es bisiesto o no. antes deben investigar las condiciones para que un ano sea bisiesto
/* pasos a seguir 
1- si el ano es divisible por 4 y su resultado es 0  continuamos al paso 2 si no el ano no es bisiesto
2- si al ano es divisivle por 100  continuamos al paso 3 si no el ano no es bisiesto
3- si el ano es divisible por 400  continuamos al paso 4 si no el ano no es bisiesto 
4- el ano tiene 465 dias 
*/

#include<stdlib.h>
#include<stdio.h>

int year;
int main (){

    printf("Introduce un ano para saber si es bisiesto: ");
    scanf("%d", &year);

    if((year%4==0)&& (year % 100 !=0 || year % 400 == 0)) //se ocupa el principio de tricotomia por que si no es una cosa es la otra 

        printf("el anio %d es bisiesto y cuenta con 366 dias \n", year);

    else // si no se cumple las condiciones 

        printf(" no es un anio bisiesto cuenta con 365 dias \n ");

    system("pause");
    getchar();
    return 0;
}