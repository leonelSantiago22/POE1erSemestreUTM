#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>
#include <ostream>

using namespace std;

int main()
{
 int a,i=1,b,c,g;
 printf("Ingresa el primer numero:\t");
 scanf("%d",&a);
 printf("Ingresa el segundo numero:\t");
 scanf("%d", &b);
 //c=a;
 g=a;
 printf("%d+",g);
 while (i<=b-1)
 { 
     c=a+g;
     a=c;
    i++;
    
    if(i<=b-1){
        printf("%d+",g);
    }else
    {
        printf("%d", g);
    }
 }
 printf(":%d", c);

getchar(); getchar();
return 0;
}