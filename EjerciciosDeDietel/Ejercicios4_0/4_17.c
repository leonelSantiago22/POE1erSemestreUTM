/*
la cobranza se hace cada vez mas dificil durante periodos de recesion, por lo que empresas pudieran retringit 
sus limite de credito para impedir que sus cuentas por cobrar (el dinero que se les debe)
crezca demasiado. por lo tanto, si un cliente particular tenia un limite de credito de 200, el limite de credito de este 
cliente es ahora de 1000. si uncliente que tenis un limite de credito de 5000, el limite de credito de este cliente 
es ahora de 2500. Escriba un programa que analice el estado del credito de tres clientes de esta empresa. para cada cliente se le dara:
1- El numero de cuenta del cliente 
2- El limite de credieto del cliente antes de la recesion 
3-El saldo actual del cliente, (Es decir, la cantidad que el cliente le deve a la empresa)
su programa debera calcular e imprimir el nuevo limite de credito para cada cliente, y debera determinar 
(e imprimir) que clientes tienen saldos actuales que exceden sus nuevos limites de credito
*/
#include<stdlib.h>
#include<stdio.h>
int cuenta,credito, saldo;
int c1,cr1,sa1,c2,cr2,sa2,c3,cr3,sa3;
int main(){
    printf("*********Bienvenido Al Banco SENEGAL*********\n");
   for (int i = 1; i <=3; i++){
    printf("Cliente numero:%d \n", i);
    printf("Por favor inserta tu numero de cuenta: ");
    scanf("%d", &cuenta);
    printf("\n ingresa cual era tu limite de credito: ");
    scanf("%d", &credito);
    printf("\nCual es tu saldo actual? ");
    scanf("%d", &saldo);
    if(i==1){
    c1=cuenta; cr1=credito; sa1=saldo;}
    if(i==2){
    c2=cuenta; cr2=credito; sa2=saldo;}
   if(i==3){
    c3=cuenta; cr3=credito; sa3=saldo;}
   }
        printf("cliente 1 numero de cuenta:%d, credito anterior:%d, credito actual:%d, tu saldo es de:%d\n\n",c1, cr1, cr1/2, sa1);
        printf("cliente 2 numero de cuenta:%d, credito anterior:%d, credito actual:%d, el saldo es de:%d\n\n",c2, cr2, cr2/2,sa2);
        printf("cliente 3 numero de cuenta:%d, credito anterior:%d, credito actual:%d, el saldo es de:%d\n\n",c3, cr3, cr3/2, sa3);
    if(sa1>cr1/2)
        printf("el cliente 1 exede su credito %d \n",sa1-cr1/2);
    if(sa2>cr2/2)
        printf("el cliente 2 exede su credito por %d \n",sa2-cr2/2);
    if(sa3>cr3/2)
        printf("el cliente 3 exede su credito %d\n",sa3-cr3/2);  

system("pause");
 return 0;              
}