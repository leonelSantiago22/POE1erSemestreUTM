#include<stdlib.h>
#include<stdio.h>

int main() 
{
    int cont=0;
    int personas=0, altura=0; 

    printf(" \n Introduce la cantidad de personas: ");
    scanf("%d", &personas);

    for (int i = 1; i <=personas; i++)
    {
        printf(" \n Introduce tu estatura: ");
        scanf("%d", &altura);
        
        if (altura >= 165)
        {
            cont+=altura;
        }
        else
        {
            printf (" \n Tu estatura no es valida.");
            i--;
        }
    }
    float total;
    total= (float) cont/personas;
    printf(" \n El promedio de %d personas es: %.2f", personas, total);

    getchar(); getchar();

    return 0;
}