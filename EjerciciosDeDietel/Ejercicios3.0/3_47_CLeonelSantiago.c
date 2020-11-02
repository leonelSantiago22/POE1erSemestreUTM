/**/
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int n, r=1;
double e, c;
int main(){
    printf("Ingrese un numero para calcula la contante 'e': ");
    scanf("%d", &n);
    for (int i =1; i<=n; i++){
        r=r*i;
        e=(double) (pow(i,i))/r + e;
    }
    c = (double) (1 + e);
    printf("\n El valor de 'e' es:%9.12f \n",c);
    system("pause");
   return 0; 
}