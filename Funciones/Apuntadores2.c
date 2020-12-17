#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

size_t get_size(float *ptr);
size_t get_size3(double *ptr);

int main(){
    int arrar_int[20];
    int *ptrA= arrar_int;
    float array[20];
    double array2[20];
    float x=5.0F;
    char c;
    short s;
    int i;
    long l;
    long long ll; 
    double y= 3.15;
    long double ld;
    printf("El tamanio char c:              \t %u, %u\n", sizeof(c),   sizeof(char));
    printf("El tamanio de shotr:            \t %u, %u\n", sizeof(s),   sizeof(short));
    printf("El tamanio de int >>>>>>>>>:             \t %u, %u\n", sizeof(i),   sizeof(int));
    printf("El tamanio de long :            \t %u, %u\n", sizeof(l),   sizeof(long));
    printf("El tamanio de long long :       \t %u, %u\n", sizeof(ll),  sizeof(long long ));
    printf("Variable Float:                 \t %u, %u\n", sizeof(x),    sizeof(float));
    printf("Arreglo Float:                  \t %u, %u\n",sizeof(array), get_size(array));
    printf("Variable de double:             \t %u, %u\n", sizeof(y),   sizeof(double));
    printf("Arreglo de double:              \t %u, %u\n",sizeof(array2), get_size3(array2));
    printf("Variable de long double:        \t %u, %u\n", sizeof(ld),  sizeof(long double));
    //printf("Variable de Entero:\t %u, %u \n", sizeof(arrar_int), sizeof(p));
    return 0;
}

size_t get_size2(float array[]);

size_t get_size(float *ptr){
    return sizeof(ptr);
}

size_t get_size3(double *ptr){
    return sizeof(ptr);
}