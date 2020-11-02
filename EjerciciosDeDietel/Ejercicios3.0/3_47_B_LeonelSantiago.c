/*
escriba un programa que estime el valor constate matematica e, utilizando la formula e = 1 + 1/1! + 1/2!

!    es la factorial
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int n, r=1;
double e, c;
int main (){ 
    printf("Ingrese un numero para calcula la contante 'e': ");
    scanf("%d", &n);
    for (int i =1; i<=n; i++){
        r=r*i;
        e=(double) 1/r + e;
    }
    c = (double) 1 + e;
    printf("\n El valor de 'e' es:%f \n",c);
    system("pause");
   return 0; 
}