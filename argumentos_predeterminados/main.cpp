#include <iostream>
using namespace std;

void sumarNumeros(double=0,double=0,double=0);


int main()
{
    double a,b,c;
    cout << "Ingrese el número 1 -> ";cin>>a;
    cout << "Ingrese el número 2 -> ";cin>>b;
    cout << "Ingrese el número 3 -> ";cin>>c;
    sumarNumeros(a,b,c);
    cout<< "suma 2 primeros números es ";
    sumarNumeros(a,b); // no se añade C, sin embargo tiene un valor default en el prototipo
    cout<< "no se suma ninguno ";
    sumarNumeros();
    return 0;
}

void sumarNumeros(double a ,double b ,double c){
    cout << "la suma es "<<(a+b+c) << endl;
}
