#include<stdlib.h>
#include<stdio.h>

int main() 
{
    int cont=10;
    int precio=750, meses;
    printf(" \n 1 precio : 750");
    for (int i = 1; i <20; i++)
    {
        printf("\n %d precio: %d ", i+1, precio+cont);
        cont*=2;
    }
    
    printf(" \n El precio inicial es 750 y el final : %d", precio+cont );

    getchar(); getchar();

    return 0;
}