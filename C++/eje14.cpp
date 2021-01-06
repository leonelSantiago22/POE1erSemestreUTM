#include<stdio.h>
#include<cstdlib>
#include<conio.h>
#include<locale.h>

int main()
{
    int i=1, cant, saldoA, montoC, pago, intereses=0, multa=0, saldoActual=0, pagoMinimo=0, pagoPNI=0;
	
	printf("\n --------> Bienvenido al banco El Bandido de Guante Blanco <----------\n ");
	
	while(i!=2){
		printf("\n EL CLIENTE NUMERO [%d]\n",i);
		printf("\n INGRESA EL SALDO ANTERIOR \t: ");
		scanf("%d",&saldoA);
		printf("\n INGRESA EL MONTO DE LAS COMPRAS \t: ");
		scanf("%d",&montoC);
		printf("\n PAGO CON QUE DEPOSITO EL CORTE\t: ");
		scanf("%d",&pago);
		
		if(saldoA*0.15>pago){
			intereses=(saldoA*0.12);
			multa=200;
		}
		else{
			intereses=0;
			multa=0;
		}
		
		saldoActual=(saldoA+montoC-pago+intereses+multa);
		pagoMinimo=(saldoA*0.15);
		pagoPNI=(saldoA*0.85);
		//printf("\n ------------------------------------------------------- \n");
		printf("\n Valor de intereses:\t%d pesos\n",intereses);
    	printf("\n Valor de multa:    \t %d pesos\n",multa);
    	printf("\n Valor de pago minimo:\t%d pesos\n",pagoMinimo);
    	printf("\n Valor de pago para no generar intereses:\t %d pesos\n",pagoPNI);
    	printf("\n Valor de saldo actual:\t  %d pesos\n",saldoActual);
    	printf("\n PULSA CUALQUIER TECLA PARA CONTINUAR : \tn");
    	getche();
    	i++;
        printf("\n Desea ingresar un nuevo cliente? 1=si 2=no");
        scanf("%d", &cant);
	}

    printf("\n\n\n\n\n\nBais");
    getchar(); getchar();
	return 0;
}