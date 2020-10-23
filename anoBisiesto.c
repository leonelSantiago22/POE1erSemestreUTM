//dado un ano cualquiera, el programa determinar si el ano es bisiesto o no. antes deben investigar las condiciones para que un ano sea bisiesto
/* pseudo codigo 
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

    if(year%4==0){ //si la division del ano entre 4 es igual a 0 se comienza ap paso 2 

            if (year%100){ //comprobamos si es divisible entre 100

                if (year%400){ //el ultimo paso es saber si el numero es divisible entre 400

                    printf("El ano es bisiesto y tiene 366 dias \n"); //si si es todos los pasos anteriores 

                }else{ //si no es divisible entr 400
                    printf("El ano no es bisiesto \n");
                    }
     
                        }else{ //si no es divisible entre de 100
                        printf("El ano no es bisiesto \n");
                }

}else{ // si no es divisible entre de 4 
        printf(" no es un ano bisiesto \n ");
}
    
    system("pause");
    getchar();
    return 0;
}