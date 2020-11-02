/*
suponga que el dia 1 del mes actual fue lunes. Realice un programa que al introducir 
una fecha [1-30] del mes, calcule el dia de la semana [lunes, martes, domingo] correspondiente.
*/
#include<stdio.h>
#include<stdlib.h>
char dia;
int main(){
    printf("Ingresa un dia del mes [1-30]");
    scanf("%c", &dia);
    
        switch ((char)dia){
            case '1': case '8': case '15': case'22':case '29': printf("Lunes \n"); break; 
            case '2': case '9': case '16': case'23':case '30': printf("martes \n"); break;
            case '3': case '10': case '17': case'24': printf("miercoles \n"); break;
            case '4': case '11': case '18': case'25': printf("jueves \n"); break;
            case '5': case '12': case '19': case'26': printf("viernes \n"); break;
            case '6': case '13': case '20': case'27': printf("sabado \n"); break;
            case '7': case '14': case '21': case'28': printf("domingo \n"); break;

        default:printf("No es ningun dia del mes[1-30] \n");               
            break;
        }
    system("pause");    
    return 0;
}