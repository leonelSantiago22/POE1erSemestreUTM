#include<iostream>
 using namespace::std;

 #include <cstdlib>
 #include <ctime>



 const int Numero_Palos = 4;
 const int Cartas_de_Palo = 13;

 const int n = Cartas_de_Palo + 1;

 void Barajar( int[][n], int[], int[] );
 void Repartir( int[][n] );
 int Analizar( int[][n], int[], int[] );
 int Corrida( int[]);
 int Flor_Imperial( int[]);
 //Las funciones Corrida y Flor_Imperial son llamadas por la funcion Analizar


 //////////////////////////////////////////////////////////////////
 // Inicia la funcion main
 /////////////////////////////////////////////////////////////////

 int main()
 { // Inicia main

 int centinela = 0;


 srand(time(0));
 int cartas[Numero_Palos + 1][n] = { {0, 0} };
 int xF[53] = {0};
 int xN[53] = { 0 };

 Barajar( cartas, xF, xN );
 Repartir( cartas );
 //Esta funcion debe repartir 5 cartas del arreglo cartas
 // solo hay que imprimir los numeros 1 a 5 ;

 centinela = Analizar( cartas, xF, xN );

 cout <<endl<<endl<<endl;

 return 0;

 } // Cierra main
 // Esta funcion define las variables y llama a las funciones
 // barajar y repartir

 //////////////////////////////////////////////////////////////////
 // Inicia la funcion barajar
 /////////////////////////////////////////////////////////////////

 void Barajar(int Mazo[][14], int xFiguras[], int xNumeros[] )

 { // Abre barajar

 int contador;
 int tipo_carta;
 int numero_carta;

 for ( contador = 1; contador <= 52; contador++ )
 { //Abre for
 // El numero de cartas a llenar es 52, las entradas de la variable
 // mazo.
 do{ //Abre do
 tipo_carta = 1 + rand() % 4; //Se elige al azar la columna y la
 numero_carta = 1 + rand() % 13; //fila del arreglo mazo en donde
 // se pondra el numero siguiente
 } while( 0 != Mazo[tipo_carta][numero_carta] ); //Cierra do
 //Con la condicion del while se cuida que no se llene una casilla
 // ya llenada


 if ( 0 == Mazo[tipo_carta][numero_carta] )
 // Este if es porque es muy probable que la fila y columna elegida
 // ya este llena, sobre todo para los numeros finales
 { // Abre if
 Mazo[tipo_carta][numero_carta] = contador;
 xFiguras[contador] = tipo_carta;
 xNumeros[contador] = numero_carta;
 } //Cierra if
 } //Cierra for

 return;
 } // Cierra barajar




 /////////////////////////////////////////////////////////////////
 // Inicia la funcion repartir
 ////////////////////////////////////////////////////////////////

 void Repartir( int barajadas[][14] )

 { // Abre Repartir
 const char *Numero[14] = { "error", "As", "Dos", "Tres", "Cuatro", "Cinco",
 "seis", "siete", "ocho", "Nueve", "Diez",
 "Sota", "Reina", "Rey"};

 const char *Palos[5] = { "error", "Corazones", "Treboles", "Espadas",
 "Diamantes"};

 cout << "\nSu mano es la siguiente:\n " << endl;


 for ( int r = 1; r <= 5; r++ )
 // Se repartiran 5 cartas

 { //Abre for
 for ( int y = 1; y <= 4; y++ )
 {
 for ( int z = 1; z <= 13; z++ )
 { //Abre for doble anidado
 if ( r == barajadas[y][z])
 cout << Numero[z] << " de " << Palos[y] << endl;

 } // Cierra for doble anidado
 } //Cierra for anidado
 } //Cierra for
 } // Cierra Repartir



 ////////////////////////////////////////////////////////////////////////
 // Inicia la funcion analizar
 ///////////////////////////////////////////////////////////////////////


 int Analizar( int xcartas[][14], int Fig[], int Num[] )

 { //Abre Analizar

 int temp = Fig[1];
 int iguales = 1;
 int CENTINELA = 0;
 int corrida = 0;


 //Aqui se analizan los numeros

 int temp2[14] = {0 };
 for ( int s = 1; s <= 5; s++ )
 { // Abre for
 temp2[Num[s]]++;

 } //Cierra for


 int contador_pares = 0;
 int contador_tercia = 0;
 int contador_poquer = 0;

 for ( int w = 1; w <= 14; w++ )
 { //Abre for
 if ( 2 == temp2[w] )
 contador_pares++;

 if ( 3 == temp2[w] )
 contador_tercia = 1;

 if ( 4 == temp2[w] )
 {
 contador_poquer = 1;
 }

 } //Cierra for

 if ( 0 != contador_pares )
 {
 cout <<"\nUsted tiene " << (1 == contador_pares? " 1 par " :
 " dos pares") << endl;
 }

 if ( 1 == contador_tercia )
 {
 cout <<(0 != contador_pares? "y 1 tercia ( Un full). " :
 "\nUsted tiene una tercia. ");
 CENTINELA = 1;
 }

 if ( 1 == contador_poquer )
 {
 cout <<"\nUsted tiene un poquer. " << endl;
 }



 //En este ciclo for se analizan las figuras
 for ( int i = 2; i <= 5; i ++ )
 { // Abre for
 if ( Fig[ i ] != temp )
 { // Abre if
 iguales = -1;
 } // Cierra if
 } // Cierra for

 if ( 1 == iguales )
 { //Abre if

 corrida = Corrida( Num );
 // La funcion corrida verifica que los numeros sean consecutivos
 int flor; // Se verifica que haya flor imperial
 if ( 0 == corrida )
 { // Abre if anidado
 flor = Flor_Imperial(Num);
 if ( 0 == flor )
 { //Abre if doble anidado
 cout <<"Usted tiene un flux!" << endl;
 } //Cierra if doble anidado
 else
 { // Abre else doble anidado
 cout <<"\n\nUSTED TIENE UNA FLOR IMPERIAL!" << endl << endl;
 } // Cierra else doble anidado
 } // Cierra if anidado

 else // Abre else anidado
 {
 cout << "\nUsted tiene una escalera de color!" << endl;
 } //Cierra else anidado


 } // Cierra if
 else
 {
 int escalera;
 escalera = Corrida( Num);

 if ( 1 == escalera )

 cout << "\nUsted tiene una escalera. " << endl;
 }
 return CENTINELA;
 } //Cierra Analizar

 ///////////////////////////////////////////////////////////////////
 // Inicia la funcion corrida, esta funcion se llama por la funcion
 // Analizar
 //////////////////////////////////////////////////////////////////

 int Corrida( int X[])

 { // Abre la funcion Corrida

 int temporal;
 for ( int l = 1; l < 5; l++)
 { //Abre for
 for ( int d = 1; d < 5; d++ )

 { // Abre for anidado
 if ( X[d + 1] < X[d] )
 { //Abre if
 temporal = X[d];
 X[d] = X[d + 1];
 X[d + 1] = temporal;
 } //Cierra if
 } //Cierra for anidado
 } //Cierra for

 int ordenados = 0;

 for ( int t = 1; t < 5; t++ )
 { //Abre for
 if ( X[t + 1] == X[t] + 1 )
 { //Abre if
 //cout << X[t] << " ";
 ordenados++;
 } // Cierra if
 } //Cierra for

 //cout << X[5] << endl;
 if ( 4 != ordenados )

 return 0;

 else

 return 1;
 }



 //////////////////////////////////////////////////////////////////////////
 /// Se define la funcion Flor_Imperial
 /////////////////////////////////////////////////////////////////////////


 int Flor_Imperial( int Y[] )
 { //Abre la funcion
 int tempor;
 for ( int f = 1; f < 5; f++)
 { //Abre for
 for ( int d = 1; d < 5; d++ )

 { // Abre for anidado
 if ( Y[d + 1] < Y[d] )
 { //Abre if
 tempor = Y[d];
 Y[d] = Y[d + 1];
 Y[d + 1] = tempor;
 } //Cierra if
 } //Cierra for anidado
 } //Cierra for

 // El doble ciclo for anterior ordeno de menor a mayor el arreglo
 // de numeros de las cartas

 int variable = 10;
 int cambio = 0;

 if ( 1 != Y[1] )
 return 0;

 else
 { // Abre else

 for ( int z = 2; z <= 5; z++ )
 { //Abre for
 if ( Y[z] != variable )
 {
 cambio = 1;
 }
 variable++;
 } //Cierra for
 } // Cierra else

 if ( 0 != cambio )
 return 0;
 else
 return 1;
 } // Cierra la funcion

