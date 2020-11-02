/*
utilizar una estructura de control para variar la variable de control hasta 100 
*/
#include <stdio.h>
#include <stdlib.h>


int main (){


    /*for (int i = 1; i <=100; i++) //aumento hasta 100
    {
        printf("%d \n", i);
    }*/
   /* for (int i = 100; i >= 1; i--) //para decremento
    {
        printf("%d \n", i);
    }*/
    /*for (int i = 7; i <=77; i+=7) //para la variable a 7
    {
        printf("%d \n", i);
    } */
    /*for (int i = 99; i>=0; i-=11)//de decremento -11
    {
        printf("%d \n", i);
    }*/
    /*for (int i = 20; i>=2 ; i-=2)//Variar de 20 a 2 en paso de menos 2 
    {
        printf("%d \n", i);
    }*/
    /*for (int  i = 2; i <=20 ; i+=3)//Sucesion 2,5,8,11,14,17,20
    {
        printf("%d \n", i);
    }*/
    for (int i = 2; i <=100; i+=2){//de 2 a 100
        printf("%d \n", i);
    }
    
    
system("pause");  
return 0;   
}