#include <stdio.h>
#include <stdlib.h>
void quitaespacios(char cadena [100], char cadenasin[100]);
int main()
{
 char cad[100],cadsin[100],vaciar;
 //Leemos la cadena
 printf("Introduzca la cadena: ");
 //fflush( stdin );
 fgets(cad, 100,stdin);
 
 quitaespacios(cad,cadsin);
 
 //Imprimimos el resultado
 printf("La cadena es %s",cadsin); 
 
 return 0;
}
//Función que devuelve la misma cadena que se le pasa como argumento pero sin espacios
void quitaespacios(char cadena [100], char cadenasin[100])
{
 int i,j;
 i=0;
 j=0;
 while (cadena[i]!='\0') 
 {
  if(cadena[i]!=' ')
  {
   cadenasin[j]=cadena[i];
   j++;
  }
  i++;
 }

}
