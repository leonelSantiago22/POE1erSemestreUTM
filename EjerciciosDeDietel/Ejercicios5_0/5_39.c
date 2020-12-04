#include <stdio.h>
#include <stdlib.h>

void TorresHanoi();
int main(){
    int n;
    printf("\nCon Cuantos discos cuenta? :");
    scanf("%d", &n);
    TorresHanoi(n ,1,3,2);

    getchar();
    return 0;
}

void TorresHanoi(int n, int o, int d, int aux){
    if (n>0)
    {
        TorresHanoi(n-1, o, aux, d);
        printf("\n  %d ---> %d",o,d);
        TorresHanoi(n-1, aux, d, o);
    }
    
}