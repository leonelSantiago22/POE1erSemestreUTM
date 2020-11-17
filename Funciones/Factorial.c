#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int  factorial();
int factorial_recursivo();

int n=5;
int main(){
    int r=(int) factorial(n);
    int rc= factorial_recursivo();
    printf("\n el factorial de %d es igual a %d",n, r);
    printf("\n De manera recursiva %d \n ", rc);

    system("pause");
    return 0;
}
int factorial(int n){
    int resultado =1;
    int i = 0;
    for (int i = 1; i <=n ; i++){
        resultado *=i;
    }
    return resultado;
}

int factorial_recursivo(int n){    // Se resuelvw el factorial de manera recursiva 
    if (n== 0){
        return 1;
    }else   {
        return (n *factorial_recursivo(n - 1));
        printf("\n",n);
    }
}