/*
Escriba un programa que imprima una tabla de todos los numeros romanos en el rango del 1 al 100
*/
#include<stdio.h>
#include<stdlib.h>
int V=5, X=10, l=1, L=50, C=100, num;
int decenas, unidades, centenas;
int main(){
    //printf("Ingresa un numero a convertir: [1-100]:");
  //scanf("%d", &num);
for(int num=1; num<=100;  num++){
if(num>=1 && num<=100){
  printf("  %d  ",num);
    centenas = (num % 10000) % 1000 / 100;
    decenas = ((num % 10000) % 1000) % 100 / 10;
    unidades = (((num % 10000) % 1000) % 100) % 10;
    switch (centenas)
    {
    case 1: printf("C\n");break;
    
    default: printf(" ");
    break;
    }
    switch (decenas){
    case 1: printf("X"); break;
  case 2: printf("XX"); break;
  case 3: printf("XXX"); break;
  case 4: printf("XL"); break;
  case 5: printf("L"); break;
  case 6: printf("LX"); break;
  case 7: printf("LXX"); break;
  case 8: printf("LXXX"); break;
  case 9: printf("XC"); break; 
  default: printf(" ");break;
  }
    
    switch (unidades){
  case 1: printf("I\n"); break;
  case 2: printf("II\n"); break;
  case 3: printf("III\n"); break;
  case 4: printf("IV\n"); break;
  case 5: printf("V\n"); break;
  case 6: printf("VI\n");break;
  case 7: printf("VII\n"); break;
  case 8: printf("VIII\n"); break;
  case 9: printf("IX\n"); break;
 }
}else{
    printf("\ningresa un numero valido\n"); return 0;
}
  }
system("pause");
return 0;        
}