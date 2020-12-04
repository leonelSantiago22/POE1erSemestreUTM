#include<stdlib.h>
#include<stdio.h>
int op;
void primo(), mil(), metodoraiz();
int main(){

    getchar();
   system("cls");
    printf("\n Opciones \n 1) Si 'n' es primo\n 2) Saber los numero primos del 1 al 10mil\n 3)1 a 10 mil segundo metodo\n 4)salir\n  ingresa una opcion: ");
    scanf("%d", &op);
    do
    {
        switch (op)
        {
        case 1: primo(); break;
        case 2: mil(); break;
        case 4: op=4; break;
        }
    } while (op!=4);
    return 0;
}

void primo(){
    int n, di=2 , pri=0;
    printf("\n Ingrese un numero para saber si es primo: \t");
    scanf("%d", &n);
    while (di<n && pri !=1)
    {
        if (n%di==0) pri=1;
        di++;
    }
    if (pri==0)
    {
        printf("\n El numero %d es primo\t",n);
    }else
    {
        printf("\n El numero %d no es primo\n",n);
    }
    getchar();
    main();
}
void mil(){
    for (int j = 2; j <=10000; j++){
        int a=0;
        for (int i = 1; i <=10000; i++)
        {
            if (j%i==0)
            {
                a++;
            }
        }
        if (a==2)
        {
            printf("\t %d",j);
        }
    }//fin del for
    getchar();
    main();
}

void metodoraiz(){

}