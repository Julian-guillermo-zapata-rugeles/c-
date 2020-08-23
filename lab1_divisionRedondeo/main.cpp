//recibir dos numeros y calcular la division de estos redondeada
//2020

#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
    float numero1=0, numero2=0 ;
    cout << "Ingrese dos numeros para dividir (con redondeo)" << endl;
    cout<< "numero 1 : "; cin >> numero1;
    cout<< "numero 2 : "; cin >> numero2;
    if(numero2!= 0){
        cout<<numero1<<"/"<<numero2<<"="<< round(numero1/numero2)<<endl;
    }
    else{
        std::cerr<<"No se puede dividir por cero ! ingresa otro denominador "<<endl;
    }
    return 0;
}
