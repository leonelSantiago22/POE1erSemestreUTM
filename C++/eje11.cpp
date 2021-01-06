#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>
#include <ostream>
using namespace std;
int main()
{

		setlocale (LC_CTYPE, "spanish");
	int i=1, sueldo, cant, horas, resta, h, total, suma, mayor=0;
	char nombre[20];
	
	printf("\n Ingrese la cantidad de trabajadores\n");
	printf("\n Cantidad: ");
	scanf("%d",&cant);
	
	while(i<=cant)
    {
		system("cls");
		printf("\nTrabajador [%d] de [%d]\n",i,cant);
		printf("\n Nombre: ");
		scanf("%s",&nombre);
		printf("\n Sueldo: ");
		scanf("%d",&sueldo);
		printf("\n Horas trabajadas: ");
		scanf("%d",&horas);

		if(sueldo>0 && sueldo<=1500){
			suma=(sueldo*0.05);
			resta=(sueldo-suma);
			h=(horas*7);
			total=(resta/h);
		}
		if(sueldo>1500 && sueldo<3000){
			suma=(sueldo*0.07);
			resta=(sueldo-suma);
			h=(horas*7);
			total=(resta/h);
		}
		if(sueldo>3000 && sueldo<4500){
			suma=(sueldo*0.09);
			resta=(sueldo-suma);
			h=(horas*7);
			total=(resta/h);
		}
		
		printf("\n Sueldo de  el trabajardor %s por hora es: %d pesos\n",nombre,total);
		printf("\n Sueldo semanal con descuento es de : %d pesos\n",resta);
		getche();
		
		if(mayor<=resta)
        {
			mayor=resta;
		}
		i++;
	}
	printf("\n EL SUELDO MAYOR ES DE --->: %d", mayor);
	

    getchar(); getchar();
	return 0;
}



