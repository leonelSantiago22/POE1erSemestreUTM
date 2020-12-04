/*
Escriba una funcion que obtenga el tiempo como tres argumentos enteros ( para horas, minutos, segundos) y ese el numero de segundos desde la ultima 
vez que el reloj "Leego a las 12". utilice esta funcion para calcular la cantidad de tiempo en segundos entre dos horas,
Cuabdo ambas esten dentro de un ciclo de 12 horas del reloj.
*/
#include<stdio.h>
#include<stdlib.h>

int h,m,s;
int hh,mm,ss;
int tiempo1();
int main(){
    printf("\n Introduce el tiempo: Hrs, Min, seg: (ctrl+c)para finalizar\n");
    scanf("%d%d%d", &h, &m, &s);
    printf("\n Introduce el tiempo: Hrs, Min, seg: \n");
    scanf("%d%d%d", &hh, &mm, &ss);
        
    if (h<=12 && m<=60 && s<=60 && hh<=12 && mm<=60 && ss<=60 || h!=-1 )
    {
        h*=3600;
        m*=60;
        hh*=3600;
        mm*=60;
       tiempo1(); 
    }else
    {
        printf("\n Por favor ingresa un tiempo valido");
    }
    
}

int tiempo1(){
        int h1;
        h1=(h+m+s)-(hh+mm+ss);
        if (h1>=0){
           printf("\n Han trascurrido: %d segundos", h1); 
        }else{
            printf("\nHan transcurrido: %d segundos", h1*-1);
        }
        main();
}
