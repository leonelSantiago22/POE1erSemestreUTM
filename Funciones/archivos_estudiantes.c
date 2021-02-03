#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
typedef struct archivos_estudiantes
{
    int matricula;
    char *nombre [60];
    float calificaciones;
}ESTUDIANTE;

void create_alumno();

int main()
{
    FILE *pff;

    if ((pff = fopen("estudiante.txt", "w"))== NULL)
    {
         puts("\nError al abrir el archivo");
         exit(-1);
    }

    char r = 'S';

    while (toupper(r)== 'S')
    {
        ESTUDIANTE est;
    }
    
    return 0;
}

void crear_alumno(ESTUDIANTE *p)
{
    char nombre_temporal [120];
    printf("\nMatricula del estudiante :\t ");
    scanf("%d", p->matricula);
    printf("\nNombre del estudiante: ");
    fgets(nombre_temporal, 79, stdin);

    p->nombre = (char *) malloc ((strlen(nombre_temporal)+1)*sizeof(char));
    strcpy(p->nombre, nombre_temporal);
}