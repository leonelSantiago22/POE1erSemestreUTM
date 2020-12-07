#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int dado1,dado1, suma,  i; 

int main(){
    srand(time(NULL));
    int n2=0;
    int dado1, dado2, suma, i;
    printf("\n Tirar los dados, Pulsa cualquier tecla para iniciar  ");
    getchar();
   // int suma = dados(suma);
    for (  i = 0; i <= 36000; i++)
    {
        
        dado1= rand() % 6;
        dado2 = rand() % 6;
        suma = dado1 + dado2;
        if(suma==2) {   n2 +=1;}
    }
   
    printf("El numero 2 se repitio %d en las posisciones ", n2 );    
    
    
}

