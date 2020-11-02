/*
El factorial de un entero no negativo n se escribe como n! (se dice "Factorial de n") y se define como sigue : 
    n!= n * (n*1) * (n*2)........
*/
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int n, r=1;
int main (){
    printf("Ingresa un numero para obtener su factorial: (mayor a cero)");
    scanf("%d", &n);
    
    if(n>=0){
    for (int  i = 1; i<=n; i++)
    {
        printf(" %d ", i);
        r= r * i;
    }
    }else
    {
        printf("\n tiene que ser un numero positivo\n ");
    }
printf("\n resultado: %d\n",r );    
system("pause");
return 0;
}
