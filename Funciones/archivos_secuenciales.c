#include<stdio.h>

int main()
{
    FILE *cfPtr; // Variable tipo file declaramos el apuntador, se encarga de leer o escribir sobre un archivo
    
    
    if ((cfPtr = fopen("estudiantes.txt", "w")) == NULL){ // w = write(Borra al momento de volver a abririlo) a = guarda sin borrar la informacion anterior 
    puts("\nEl archivo no se puede abrir....");
    }else{
        puts("\nIngresar la matricula y el nombre ");
        puts("\nIngresa EOF para salir de la captura"); // EOf = end of file 

        int matricula;
        char nombre[60];
        printf("%-10d\t%-18s\n\n", "matricula", "nombre");
        fscanf(cfPtr, "%d %59s", &matricula, nombre);
        //scanf("\n%d%59s", &matricula, nombre);
        while (!feof(cfPtr))
        {
            printf("%-10d\t%-18s\n", matricula, nombre);
            fprintf(cfPtr, "%d\t%s\n", &matricula, nombre);
            //printf("\n %d %s", matricula, nombre); // Forma del f primtf, conversion 
            //printf("\nIngresar mas datos: ");
            //scanf("%d%59s", &matricula, nombre);
        }
        fclose(cfPtr);
    }

    return 0;
}