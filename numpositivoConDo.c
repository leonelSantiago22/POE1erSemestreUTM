/*
Realice un programa que encuentre el numero (num)entero positivo para la suma 1+2+3... 
num es menor igual que un limite proporcionado por el usuario
*/
#include<stdio.h>
#include<stdlib.h>
int num, suma=0, i=1;
int main(){
    printf("Ingresa el limite: ");
    scanf("%d", &num);
    /*for ( i = 1; suma <=num; i++)
    {
        suma= suma+i;
    }
    i-=2;*/
    do
    {
        suma=suma+i;
        i++;
    } while (suma<=num);
    i-=2;
    printf("\n %d \n ", i);
    system("pause");
    return 0;
}   