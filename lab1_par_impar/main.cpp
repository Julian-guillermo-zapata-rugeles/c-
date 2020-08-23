/*
Solicitar número y mostrar si estos són partes o impar
2020
*/
#include <iostream>

using namespace std;

int main()
{
    int numeroPrueba=0;
    cout << "Ingrese un numero para determinar si es par o impar " << endl;
    cin>>numeroPrueba;
    if(numeroPrueba%2==0){
        cout << "el numero es par "<<endl;
    }
    else{
        cout<<"el numero NO es par "<<endl;
    }
    return 0;
}
