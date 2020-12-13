#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

float sales[5][6];
int PRODUCTOS = 4;
int EMPLEADOS = 5;

void imprimeVentas(),calculaTotales(), inicializaTotales(), inicializarSales(), inicializarRandom();
int menu(), altaVenta() ;

int main() {
	int op = -1;
	inicializarSales();
	do{
		op = menu();
		switch (op) {
		case 1: altaVenta(); break;
		case 2: calculaTotales(); imprimeVentas(); break;
		case 3: inicializarRandom(); break;
		case 4: printf("Vuelva Pronto\n");
		}

	} while (op != 4);
    getchar();
	return 0;
}
void inicializarRandom() {
	for (int i = 0; i < PRODUCTOS; i++) {
		for (int j = 0; j < EMPLEADOS; j++) {
			if (sales[i][j] == 0) {
				sales[i][j] = (float)(rand()%100);
			}
		}
	}
}

void inicializarSales() {
	for (int i = 0; i < PRODUCTOS + 1; i++) {
		for (int j = 0; j < EMPLEADOS + 1; j++) {
			sales[i][j] = 0;
		}
	}
}

int menu() {
	int op = -1;
	do {
		system("cls");
		printf("Sistema 622\n");
		printf("1. Alta de venta\n");
		printf("2. Imprime Totales de Ventas\n");
		printf("3. Llenar Matriz con Valores Aleatorios\n");
		printf("4. Salir\n");
        printf("\n Escoje una opcion: \t");
		scanf("%d", &op);
	} while (op<1 || op>4);
	return op;
}

int altaVenta() {
	int idEmpl = -1;
	int idProd = -1;
	float venta = 0.0;
	system("cls");
	printf("Id de Empleado: ");
	scanf("%d", &idEmpl);
	printf("Id de Producto: ");
	scanf("%d", &idProd);
	printf("Venta: ");
	scanf("%f", &venta);
	if (idEmpl < 0 || idEmpl>4) {
		printf("No existe el empleado\n");
		return 0;
	}
	if (idProd < 0 || idProd>5) {
		printf("No existe el Producto\n");
		return 0;
	}
	if (venta < 0) {
		printf("No existe venta negativa\n");
		return 0;
	}
	sales[idProd][idEmpl] = venta;
    getchar();
	return 1;
}

void inicializaTotales() {
	for (int i = 0; i < PRODUCTOS; i++) {
		sales[i][EMPLEADOS] = 0;
	}
	for (int i = 0; i < EMPLEADOS; i++) {
		sales[PRODUCTOS][i] = 0;
	}

}

void calculaTotales() {
	inicializaTotales();
	for (int i = 0; i < PRODUCTOS; i++) {
		for (int j = 0; j < EMPLEADOS; j++) {
			sales[i][EMPLEADOS] += sales[i][j];
			sales[PRODUCTOS][j] += sales[i][j];
		}
	}
}

void imprimeVentas() {
	for (int i = 0; i < PRODUCTOS+1; i++) {
		for (int j = 0; j < EMPLEADOS+1; j++) {
			printf("%3.2f\t", sales[i][j]);
		}
		printf("\n");
	}
	getchar();
    getchar();
}