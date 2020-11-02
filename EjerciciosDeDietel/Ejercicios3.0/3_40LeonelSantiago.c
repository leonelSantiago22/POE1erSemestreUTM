/*Escriba un programa que despliegue el siguiente patron 
*/

#include <stdlib.h>
#include <stdio.h>
int c ;
int main(){
printf("Ingresa cualquier numero para iniciar: ");
scanf("%d", &c);
c = 1;
for (int i = 0; i <=7 ; i++){
    if ( i%2){
        printf(" ");
    }
            for (int i = 0; i <=7 ; i++){
                printf("*  ");
            } 
    printf("\n");
}
printf("\n");
system("pause");
return 0;
} 