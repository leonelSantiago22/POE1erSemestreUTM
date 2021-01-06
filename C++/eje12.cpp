#include<stdio.h>
#include<cstdlib>
#include<conio.h>
#include<locale.h>

int main()
{
    
	int i=1, cant, precio, clave, a1=0, a2=0, a3=0, suma=0, sumaB=0, sumaC=0;
	int sumaImp1=0, sumaImp2=0, sumaImp3=0;
	
	printf("\nLos vehiculos con clave 1 pagan 10%% de su valor \n");
	printf("\nLos vehiculos con clave 2 pagan 7%% de su valor  \n");
	printf("\nLos vehiculos con clave 3 pagan 5%% de su valor  \n");
	printf("\n Automoviles agregados: \n");
	scanf("%d",&cant);
	while(i<=cant)
    {
		printf("\n Automovil [%d] con clave: ",i);
		scanf("%d",&clave);
		printf("\n Precio del automovil [%d] : ",i);
		scanf("%d",&precio);
		i++;
		
		if(clave==1)
        {
			a1++;
			suma=(precio*0.10);
			sumaImp1=(precio-suma);
		}
		if(clave==2)
        {
			a2++;
			sumaB=(precio*0.07);
			sumaImp2=(precio-sumaB);
		}
		if(clave==3)
        {
			a3++;
			sumaC=(precio*0.05);
			sumaImp3=(precio - sumaC);
		}
	}
	printf("\n Automoviles con clave 1 son:  %d\n",a1);
	printf("\n Automoviles con clave 2 son:: %d\n",a2);
	printf("\n Automoviles con clave 3 son: %d\n",a3);
	printf("\n Automoviles con clave 1 pagan: %d pesos\n",sumaImp1);
	printf("\n Automoviles con clave 2 pagan: %d pesos\n",sumaImp2);
	printf("\n Automoviles con clave 3 pagan: %d pesos\n",sumaImp3);

	getchar(); getchar();
	
	return 0;
}