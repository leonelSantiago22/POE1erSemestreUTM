#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<time.h>

void Fumar(), Nofumar();

int main(){
    srand(time(NULL));
    int Asientosfumar[10], i,x, cont=1;
    do
    {    
    printf("\n Elije tu asiento 1 para  fumadores  y 2 no  para fumadores: o 3 para salir \t");
    scanf("%d", &x);;
    switch (x)
    {
    case 1:  Fumar(); break;
    case 2:  Nofumar(); break;
    case 3:  x=3; break;
    default: printf("\nIngrese lo numeros permitidos ");   break;
    con ++;
    }
     } while (x!=3 && con<=10);

    getchar();
    return 0;
}

void Fumar(){
    int Asientosfumar[10];
    int z = rand() % 5; 
    int as;
    for (int  i = 0; i <= 1 ; i++)
    {
        
        printf("\nEn el asiento %d de Fumadores Estas de acuerdo? 1=si 2=no: \t ",z);
        scanf("%d", &Asientosfumar[i]);
        if (Asientosfumar[i]==1)
        {
            printf("\nGracias Espero disfrute su vuelo, el siguiente vuelo es dentro de 3 horas\n ");
            main();
        }else
        {
            main();
        }
        
        
    }
}

void Nofumar(){
    int Asientosfumar[5];
    int z = rand() % (10-5) ; 
    int as;
    for (int  i = 0; i <= 1 ; i++)
    {
        
        printf("\nEn el asiento %d de No fumadores Estas de acuerdo? 1=si 2= no:\t ",z);
        scanf("%d", &Asientosfumar[i]);
        if (Asientosfumar[i]==1)
        {
            printf("\nGracias Espero disfrute su vuelo, el siguiente vuelo es dentro de 3 horas");
            main();
        }else
        {
            main();
        }
    }
}