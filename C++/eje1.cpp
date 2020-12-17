#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>
#include <ostream>

using namespace std;

int main(){
    int  a, b=0; 
    float c;
    cout<<"Ingrese un numero: \t";
    cin>>a;
    //cout<<" Ingrese otro numero: \t";
    //cin>>b;
    for (int  i = 1; i <=a; i++)
    {
        cout<<" \n"<<i;
        b= b + i;
    }
    cout<<endl<<" La suma es: "<<b<< endl;
    return 0;
}