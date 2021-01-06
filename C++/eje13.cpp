#include<stdio.h>
#include<cstdlib>
#include<conio.h>
#include<locale.h>

int main(){
    int op, anio, a=0, b=0, c=0, d=0, hibri=0;
    char op2;
	do
    {
        printf("Tu auto es hibirdo si= 's' no = n :");
        scanf("%s", &op2);
        if (op2=='s')
        {
            printf("\nPlaca asignada:\tHYB-Z%d", hibri); hibri++;
        }
        else
        {
        printf("\nDe que ano es el automovil que deseas registrar? ");
        scanf("%d", &anio);
        if (anio<=2004)
        {
            printf("\nPlaca asignada:\tOLD-JV%d",a);   a++;
        }else if (anio>2004 && anio<=2012)
        {
            printf("\nPlaca asignada:\tNTO-TW%d",b);    b++;
        } else if (anio>2012 && anio<=2020)
        {
            printf("\nPlaca asignada:\tMOD-TX%d", c);   c++;
        }else if (anio==2021)
        {
             printf("\nPlaca asignada:\tNEW-RY%d", d);  d++;
        }
    }//Fin del op2

        printf("\n Desea ingresar un nuevo Automovil? 1=si 2 =no :");
        scanf("%d", &op);
    } while (op!=2);
    
getchar(); getchar();
 return 0;   
}







