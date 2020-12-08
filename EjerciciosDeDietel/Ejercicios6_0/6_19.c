#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int dado1,dado1, suma,  i; 

int main(){
    srand(time(NULL));
    int n[36000];
    int n2=0,n3=0,n4=0,n5=0,n6=0,n7=0,n8=0,n9=0,n10=0,n11=0,n12=0;
    int dado1, dado2, suma, i;
    printf("\n Tirar los dados, Pulsa cualquier tecla para iniciar  ");
    getchar();
   // int suma = dados(suma);
    for (  i = 0; i <= 36000; i++)
    {
        
        dado1= rand() % 6+1;
        dado2 = rand() % 6+1;
        suma = dado1 + dado2;
        n[i]=suma; 
        if(2==n[i]) { n2++;}
        if(3==n[i]) { n3++;}
        if(4==n[i]) { n4++;}
        if(5==n[i]) { n5++;}
        if(6==n[i]) { n6++;}
        if(7==n[i]) { n7++;}
        if(8==n[i]) { n8++;}
        if(9==n[i]) { n9++;}
        if(10==n[i]) { n10++;}
        if(11==n[i]) { n11++;}
        if(12==n[i]) { n12++;}
    }
   
    printf("\n 2  se repite %d", n2);
    printf("\n 3  se repite %d", n3);
    printf("\n 4  se repite %d", n4);
    printf("\n 5  se repite %d", n5);
    printf("\n 6  se repite %d", n6);
    printf("\n 7  se repite %d", n7);
    printf("\n 8  se repite %d", n8);
    printf("\n 9  se repite %d", n9);
    printf("\n 10  se repite %d", n10);
    printf("\n 11  se repite %d", n11);
    printf("\n 12  se repite %d", n12);

    getchar();
    return 0; 

}

