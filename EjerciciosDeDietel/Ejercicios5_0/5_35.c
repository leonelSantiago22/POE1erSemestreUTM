#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int n, ramdom;
int  nramdom();int x;
  
int main(){
    srand(time(NULL));
    x=rand()%1000 ;
    getchar();
    system("cls");
    printf("\n En que numero estoy pensado?[1-1000]");
    scanf("%d", &n);
    nramdom();
    return 0;
}

int  nramdom(){
    char op;
    printf("\n x=%d",x);
    if (n==x)
    {
        printf("\n Excelente el numero era : %d\n quieres intentarlo de nuevo ?[y o n]:", x );
        scanf("%s", &op);
        switch (op)
        {
        case 's': main();
        case 'n': return 0; break;
        }
    }else if (n>x)
    {
        printf("\n fue un poco alto, intenta de nuevo");
        getchar();
        main();
    }else if (n<x)
    {
         printf("\n fue un poco bajo, intenta de nuevo");
         getchar();
         main();
    }
    getchar();
}
