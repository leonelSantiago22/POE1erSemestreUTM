/*Escriba un programa que despliegue el siguiente patron 
*/

#include <stdlib.h>
#include <stdio.h>
int c ;
int main(){
int cd =1;
for (int i = 0; i <=10 ; i++){
    for (int  i = 1; i <=(21-cd)/2; i++)    
    {
        printf(" ");
    }
            for (int i = 1; i <=cd ; i++){
                printf("*");
            } 
            cd +=2;
    printf("\n");
}
printf("\n");
system("pause");
return 0;
} 