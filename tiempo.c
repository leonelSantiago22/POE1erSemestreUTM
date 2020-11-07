#include<stdio.h>
#include<stdlib.h>


int h=0,m=0,s=0;
int hf1,mf1, sf1, hf,mf,sf;
int main(){
    printf("ingresa el tiempo: hrs, min, seg:\n ");
    scanf("%d%d%d", &h, &m, &s);

    h*=3600;
    m*=60;
    hf1=86400-h;
    mf1=3600-m;
    sf1=(60-s)-1;
    hf= hf1/3600;
    mf=(mf1/60)-1;
    printf("Ah transcurrido : %d:%d:%d \n", hf,mf,sf1);
system("pause");
return 0;
}