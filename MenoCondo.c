#include<stdio.h>
#include<stdlib.h>

int accion, num1,num2;
int main(){
    do{
        printf("\n****************Diversas operaciones Algebraicas**********(ctrl+z) para salir\n");
        printf("\nPara hacer suma es 1\n");
        printf("Para multiplicar es 2\n");
        printf("Para dividir es 3\n ");
        printf("Para la resta es 4\n");
        printf("Para salir 5");
        printf("\ningresa la accion:");
        scanf("%d", &accion);
        printf("\nIngrese el numero 2 numeros:");
        scanf("%d%d", &num1, &num2);
        switch (accion){
        case 1: printf("\nEl resultado es:%d\n",num1+num2);             break;
        case 2: printf("\nEl resultado es:%d\n",num1*num2);             break;
        case 3:printf("\nEl resultado es:%9.3f \n",(float)num1/num2);   break;
        case 4: printf("\nEl resultado es:%d\n",num1-num2);             break;
        case 5: printf("Fin del programa\n");                           break;    
        default:    printf("\nIngrese un numero valido");               break;
        }
    }while (accion!=5);
system("pause");    
return 0;
}