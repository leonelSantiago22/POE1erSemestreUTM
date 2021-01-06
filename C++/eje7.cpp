#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>
#include <ostream>
using namespace std;
int main()
{
    int grupos, i=1, alumnos, aniostotal=0, j=1, edad=0;
    printf("Ingresa cuantos grupos son:\t");
    scanf("%d", &grupos);
    do
    {
        printf("\nCuantos alumnos son en el grupo: #%d :\t", i);
        scanf("%d", &alumnos);
        while (j<=alumnos)
        {
            printf("ingresa la edad del alumno%d\t: ", j);
            scanf("%d", &edad);
            aniostotal+=edad;
            j++;
        }
        printf("Edad promedio del grupo: %.2lf\n", (float)aniostotal/alumnos);
        i ++;
    } while (i<=grupos);

    getchar(); getchar();
    return 0;
}