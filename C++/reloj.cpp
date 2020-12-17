#include<stdio.h>
#include<conio.h>
#include <iostream>
#include <ostream>
#include <stdlib.h>
#include <windows.h>
using namespace std;

int main(){
    int h=0,m=0,s=0;
    int h1=24,mm1=60,s1=60;
    int op ;
    bool ciclo = true;
    while (h<=23)
    {
                system("cls");
                cout<<" "<<h<<":"<<m<<":"<<s;
               // Sleep(500);
                s++;
            if (s>=60)
            {
                m++;
                s = 0;
            }
            if (m>=60)
            {
                h++;
                m=0;
            }             
    }

 if (hrs == alarma_hrs && min==alarma_min && sec==alarma_sec){
                        cout << "Tiempo terminado" <<endl;
                        return 0;
                    }

    
    

return 0;
}