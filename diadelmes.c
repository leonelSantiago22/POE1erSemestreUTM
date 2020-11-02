#include<stdio.h>
#include<stdlib.h>

char dia;
int fecha=0, cont, lu, ma, mi, ju, vi, sa, domi;
int main() {
        printf("Los Dias y sus codigos\nlunes=L\nmartes=m\nmiercoles=g\njueves=j\nviernes=v\nsabado=s\ndomingo=d\n");
        printf("Ingresa el dia en que mepezo el mes (en minusculas):\n");
        scanf("%c", &dia);
                switch ((char)dia){
                case 'l': case'L':case'lunes': lu=1, ma=2, mi=3, ju=4, vi=5, sa=6, domi=7; break;
                case 'm': case'M': ma=1, mi=2, ju=3, vi=4, sa=5, domi=6, lu=7 ; break;
                case 'g':case 'G': mi=1, ju=2, vi=3, sa=4, domi=5, lu=6, ma=7; break;
                case 'j': case 'J': ju=1, vi=2, sa=3, domi=4, lu=5, ma=6, mi=7; break;
                case 'v': case 'V':vi=1, sa=2, domi=3, lu=4, ma=5, mi=6, ju=7; break;
                case 's': case'S': sa=1, domi=2, lu=3, ma=4, mi=5, ju=6, vi=7; break;
                case 'd': case'D': domi=1, lu=2, ma=3, mi=4, ju=5, vi=6, sa=7; break;
                default: printf("\nNo es un dia valido\n");system("pause");return 0;
                }//fin del switch
         printf("\n ingresa la fecha que quieres consultar del [1-30]:");
        scanf("%d", &fecha);
        if ( fecha>=1 && fecha<=30 ){
            for (int  i = 0; i <=30; i++){
                if(fecha==lu)
                    printf("La fecha %d es lunes\n ", fecha);
                else if(fecha==ma)
                    printf("La fecha %d es martes \n", fecha);
                else if(fecha==mi)
                     printf("La fecha %d es miercoles \n", fecha);
                else if(fecha==ju)
                     printf("La fecha %d es jueves \n", fecha);  
                else if(fecha==sa)
                     printf("La fecha %d es sabado \n", fecha);
                else if(fecha==domi)
                     printf("La fecha %d es domingo\n", fecha);  
                lu+=7, ma+=7, mi+=7, ju+=7, sa+=7, domi+=7;
            }//fin del ciclo for   
        }else{
            printf("\nNo es fecha valida \n");  
            }
system("pause"); 
return 0; 
}