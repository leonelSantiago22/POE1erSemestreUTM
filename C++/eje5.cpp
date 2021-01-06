#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>
#include <ostream>

using namespace std;

int main()
{
    long int ahorro=3, i=1;

    while (i<=365)
    {
        printf("\nahorro dia  %d es :%d ",i, ahorro);
        ahorro*=3;
        i++;
    }

printf("\nAhorro total: %d", ahorro);
    getchar(); getchar ();
    return 0;
    
}
