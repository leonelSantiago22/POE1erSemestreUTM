/*
calcule el valor de pi apartir de la serie infinita 
*/
#include<stdio.h>
#include<stdlib.h>
double pi,pi2, nu=4, deno=1;
int ope=1, cantidad;
int main(){
printf("Ingresa un dato para saber con que cantidad pi empiza a tener mas forma:");
scanf("%d",&cantidad);
    for (int i = 0  ; i<=cantidad; i+=2){
            pi+= ope*(nu/deno);
            deno +=2;
            ope*=-1;
    }

    printf("\n%9.10f \n", pi);
system("pause");    
return 0;    
}
