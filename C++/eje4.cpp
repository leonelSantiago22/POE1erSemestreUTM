#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>
#include <ostream>
using namespace std;
int main()
{
    int v=0,b=0,r=0, g=0;
    char foco;
    printf("f para finalizar\n");
    do
    {
        printf("\nSelecciona un foco v(verdes) b(blancos) r(rojos): ");
        scanf("%s", &foco);
        switch (foco)
        {
        case 'v' : v++; break;
        case 'b' : b++; break;
        case 'r' : r++; break;
        //default: printf("\nNo hay ese color\n"); break;
        }
    } while (foco!='f');
    
    printf("Verdes:%d \nblancos:%d \nrojos:%d", v, b, r);

getchar(); getchar();
return 0;
}