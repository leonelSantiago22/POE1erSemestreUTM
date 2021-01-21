#include<stdlib.h>
#include<stdio.h>

int main() 
{
    int cont=0;
    int num=0, di=2;
 
    printf(" \n Introduce hasta que n\243mero deseas saber: ");
    scanf("%d", &num);

    for (int i = 2; i <= num; i++)
    {
        if (i%di==0)
        {
            printf ("\n %d", i);
            cont++;
        }
        
    }
    printf(" \n Los n\243meros pares son:%d",cont);

    getchar(); getchar ();

    return 0;
    
}
