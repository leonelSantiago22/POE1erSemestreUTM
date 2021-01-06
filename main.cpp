#include <iostream>
#include <cstdlib>
#include <Windows.h>

using namespace std;

int main() {
    int hrs = 0;
    int min = 0;
    int sec = 0;
    int alarma_hrs;
    int alarma_min;
    int alarma_sec;
    char resp;
    cout << "Iniciando reloj" << endl;
    cout << "Establecer alarma? S/N" << endl;
    cin >> resp;
    if (resp=='S' || resp=='s' ){
        cout << "Alarma hora: ";
        cin >> alarma_hrs;
        cout << "Alarma minutos: ";
        cin >> alarma_min;
        cout << "Alarma segundos: ";
        cin >> alarma_sec;

         while(hrs<=23) {
             
            system("cls");
             cout<<hrs<<":"<<min<<":"<<sec<<endl;
             sec++;
             if (sec>=60)
             {
                 min++;
                 sec=0;
             }
             if (min>=60)
             {
                 hrs++;
                 min=0;
             }
    
                if (hrs == 23 && min==60 && sec==60){
                    hrs =0;
                    min = 0;
                    sec = 0;
                }
                if (hrs == alarma_hrs && min==alarma_min && sec==alarma_sec){
                        cout << "Tiempo terminado" <<endl;
                        return 0;
                 }
        }

    }else{
        while(hrs<=23) {
             
            system("cls");
             cout<<hrs<<":"<<min<<":"<<sec<<endl;
             sec++;
             //Sleep(1000);
             if (sec>=60)
             {
                 min++;
                 sec=0;
             }
             if (min>=60)
             {
                 hrs++;
                 min=0;
             }
                if (hrs == 23 && min==60 && sec==60){
                    hrs =0;
                    min = 0;
                    sec = 0;
                }
        }
    }
    return 0;
}
