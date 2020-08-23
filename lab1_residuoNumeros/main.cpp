/*
Realizar un programa que solicite dos numeros y muestre el residuo entre estos
2020

*/
#include <iostream>

using namespace std;

int main()
{
    int numero1=0,numero2=0;
    cout << "Ingrese el primer numero entero " << endl ; cin >> numero1;
    cout << "Ingrese el segundo numero entero " << endl ; cin>>numero2;
    cout<<"el residuo de "<<numero1<<"/"<<numero2<<" es "<<( numero1% numero2)<<endl;

    return 0;
}
