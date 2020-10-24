/* psuedo codigo
1- leer la calificacion 
2- si la calificacion >= 90 
imprimir "a"
    si no 
   si calificacion >= 80 
imprimir 'b'   
    si no 
    si calificacion >=70
    imprimir c 
    si no...
    si calificacion >=60 
    imprimir 'D'
    si no 
    imprimir 'F'
*/

#include <stdio.h>
#include <stdlib.h>
int cal;
int main(){
                printf("Escribe tu calificacion[0 - 100]:");
                scanf("%d", &cal);

                if(cal>=90 && cal<=100)
                        printf("A \n");
                else
                    if (cal>=80)
                        printf("B \n");
                    else
                        if (cal >= 70)
                        
                            printf("C \n");
                        else
                            if (cal>=60)
                                printf("D\n");
                        else
                            
                                printf("F \n");
                            
       system("pause");
       getchar();                     
       return 0;
       /*
        if(cal >=90)
        pritnf a 
        else if (calificacion>=80);
         B
         else if (cal >= 70);
         c
         else if (cal >= 60)
         d
         else
          F
       */
}                   