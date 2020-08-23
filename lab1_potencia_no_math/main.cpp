// recibir dos numeros , base y potencia y mostrar el resultadno #sin usar math.h
// 2020

#include <iostream>

using namespace std;

int main()
{
    int base=0 , potencia=0, resultado=1;
    cout << " Mostrar la potencia de un numero ingresado " << endl;
    cout << "Base : "; cin >> base;
    cout << "Potencia : "; cin >> potencia;

    for(int i=0;i<potencia;i++){
        resultado*=base;
    }
    cout << base << "/" << potencia << " = " << resultado<<endl;
    return 0;
}
