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
    if (resp=='S' or resp=='s' ){
        cout << "Alarma hora: ";
        cin >> alarma_hrs;
        cout << "Alarma minutos: ";
        cin >> alarma_min;
        cout << "Alarma segundos: ";
        cin >> alarma_sec;

        for (hrs = 0; hrs < 23; ++hrs) {
            for (min = 0; min < 60; ++min) {
                for (sec = 0; sec < 60; ++sec) {
                    cout << hrs << ":" << min << ":" << sec << endl;
                    Sleep(1000);
                    if (hrs == alarma_hrs && min==alarma_min && sec==alarma_sec){
                        cout << "Tiempo terminado" <<endl;
                        return 0;
                    }
                }

            }
        }
    }else{
        for (hrs = 0; hrs < 23; ++hrs) {
            for (min = 0; min < 60; ++min) {
                for (sec = 0; sec < 60; ++sec) {
                    cout << hrs << ":" << min << ":" << sec << endl;
                    //Sleep(1000);
                }
                if (hrs == 23 && min==60 && sec==60){
                    hrs =0;
                    min = 0;
                    sec = 0;
                }
            }
        }
    }

    return 0;
}
