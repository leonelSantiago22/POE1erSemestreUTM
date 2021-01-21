#include<stdlib.h>
#include<stdio.h>

int main() 
{
    float cont=15000, dinero=15000.0, dinerot=0.0;
    //printf("\n 1 dinero=15000");
    
    for (int i = 1971; i <=2021; i++)
    {
        
        printf(" \nanios trascurridos %d dinero: %.2f ",i, cont);
        
        dinero*=.15; 
        cont += dinero;
        dinero=cont + dinero;
    }
    
    getchar();getchar();
    return 0;
}