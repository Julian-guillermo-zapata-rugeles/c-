// Crear una función que eleve al  cuadrado un número
// se utilizará sobrecarga de funciones
#include <iostream>
#include <iomanip>
using namespace std;
int cuadrado(int);
double cuadrado(double);

int main()
{
    cout<<"2    cuadrado es   :"<<setw(4)<<cuadrado(2)<<endl;
    cout<<"1.2  cuadrado es :"<<setw(4)<<cuadrado(1.2)<<endl;
    return 0;
}

int cuadrado(int valor){
    return valor*valor;
}

double cuadrado(double valor){
    return valor*valor;
}
