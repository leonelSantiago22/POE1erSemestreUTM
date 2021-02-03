#include<stdio.h>
#include<stdlib.h>
#define MAX_NOM 20

int main()
{
    int numeros [10];
    int cont = 0; int j=9;

    for (int  i = 0; i <=9; i++)
    {
        printf("\nDame u numero :");
        scanf("%d", &numeros[i]);
    }


    for (int  i = 0; i <=9; i++)
    {
          if (numeros[i]==numeros[j])
          {
              cont ++;
          }
          j--;
    }

    printf("\n Numero normal : \n");
    for (int  i = 0; i <= 9; i++)
    {
        printf("%d", numeros[i]);
    }
    printf("\nNumero al reves: \n");
    for (int  i = 9; i >= 0; i--)
    {
        printf("%d", numeros[i]);
    }
    
    if (cont==10)
    {
        printf("\nEl numero se lee igual");
    }else
    {
        printf("\nEl numero no se lee igual");
    }
    

return 0;    
}