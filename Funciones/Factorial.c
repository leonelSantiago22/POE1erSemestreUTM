#include<stdlib.h>
#include<stdio.h>
#include<math.h>
unsigned long int  factorial();
unsigned long int factorial_recursivo();

int n;
int main(){
    printf("ingresa un numero para sacar su factorial : ");
    scanf("%ld", &n);
    printf("\n el factorial (iterativo) de %d es igual a %ld",n, factorial(n));
    printf("\n el factotial  De manera recursiva %ld \n ",factorial_recursivo(n));
    system("pause");
    return 0;
}

unsigned long int factorial( int n){
  unsigned long  int resultado = 1;
    int i = 0;
    for (int i = 1; i <=n ; i++){
        resultado *= i;
    }
    return resultado;
}

unsigned long int factorial_recursivo( int n){    // Se resuelve el factorial de manera recursiva 
    if (n== 0){
        return 1;
    }else   {
        return (n *factorial_recursivo(n - 1));
        printf("\n",n);
    }
}