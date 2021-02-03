#include<stdio.h>
#include<stdlib.h>


int main()
{
    int arreglo_num[3][3]={1,2,3,
                            4,5,6,
                            7,8,9};

int suma;
    printf("\nEl arreglo contiene:\n ");
    for (int i = 0; i <3; i++)
    {
        for (int  j = 0; j < 3; j++)
        {
            printf("\t %d", arreglo_num[i][j]);
            if (j==2)
            {
                printf("\n");
            }
        }
        
    }
    suma = arreglo_num[0][0] + arreglo_num[0][2] + arreglo_num[2][0] + arreglo_num[2][2];
    printf("La suma es de las orillas es :\t %d", suma );
    return 0;
}