#include<stdlib.h>
#include<stdio.h>
int n, op;
void Fibo(), FiboDou(), Fibonum();
int main(){
    getchar();
    system("cls");
    printf("\n opciones\n 1) calcular la serie fibonacci de un numero\n 2)Fibonacci maximo\n 3) Fibonacci con double\n 4) salir \n opcion: ");
    scanf("%d", &op);
    do
    {   
    switch (op){
        case 1: Fibo(); break;
        case 2: Fibonum();break;
        case 3: FiboDou();break;
        case 4: op =4; break;
        default: main(); break;
    }
    } while (op!=4);
    
    return 0;
}

void Fibo(){
    int a=0, b=1, c ;
    printf("\n Cuantos numero quieres crear ?");
    scanf("%d", &n);
    printf("\n0\n1");
    for (int  i = 0; i <=n-3; i++)
    {
        c = a + b;
        printf("\n%d",c);
        a=b;
        b=c;
    }
    getchar();
    main();
    
}
void Fibonum(){
    int a=0, b=1, c, i ;
    printf("\n0\n1");
    for ( i = 0; i>=0 && c>0; i++)
    {
        c = a + b;
        printf("\n%d",c);
        a=b;
        b=c;
    }
    printf("\n De tipo entero solo se genera hasta %d", i);
    getchar();
    main();
}

void FiboDou(){
double a=0, b=1, c, deli=0.0; 
int i, n ;
    printf("\n Ingresa la cantidad de numero que deseas generar: \t");
    scanf("%d", &n);
    printf("\n0.0\n1.0");
    for ( i = 0; i<=n ; i++)
    {
        c = a + b;
        printf("\n%.1lf",c);
        a=b;
        b=c;
    }
    printf("\n De tipo entero solo se genera hasta %d", i);
    getchar();
    main();
}