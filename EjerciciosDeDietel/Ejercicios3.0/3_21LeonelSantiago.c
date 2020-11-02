/*Desarrolle un programa en c que determine la nomina bruta para cada uno 
de varios empleado. La empresa paga "Tiempo normal"para las primeras 40 hrs trabajadas 
de cada empleado y paga "Tiempo y medio" para todas las horas trabajadas en exceso de 40 hrs. Se 
le Proporciona una lista de los empleados de la empresa, el numero de horas que cada empleado trabajo 
la ultima semana, y la tasa al horario de cada empleado. Su programa deberia introducir esta informacion para cada uno
 de los empleados, y determinar y desplegar la nomina bruta de cada uno de ellos 
*/
#include<stdio.h>
#include<stdlib.h>

int num1, hrs, resul, re2, re3, em=0, sal;
int main(){
  while(hrs!= -1 || num1!= -1){  
    printf("Ingresa tus horas trabajadas:(-1 para terminar):");
    scanf("%d", &hrs);
    printf("\n ingresa el pago por horas de trabajo(-1 para terminar):");
    scanf("%d", &num1);
if (hrs!=-1 || num1!=-1){
    
    if(hrs<=40){
        printf("El pago es: %d \n", sal = hrs * num1);

    }
    else
    {
        re2= num1/2;
        resul= hrs -40; 
        re3 = resul * re2;
        sal = (hrs*num1)+re3;
        printf("El pago es %d \n", sal);
    }

    em++;
    printf("Empleado %d horas trabajadas %d salario por hora %d  su salario es %d\n",em,hrs,num1, sal);
} 

  }
    system("pause");
    return 0;
}
