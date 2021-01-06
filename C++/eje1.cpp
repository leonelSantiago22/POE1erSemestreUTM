#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>
#include <ostream>

using namespace std;

int main()
{
    int salario = 5100, i=1, f=5100; 
    //float suma;
    while (i<=8)
    {
        printf("\n salario de %d es: %d\t",i,salario);
        salario*=.10;
        salario= f +salario;
        f = salario;
        i++; 
    }
    

    getchar(); getchar();
    return 0;
}