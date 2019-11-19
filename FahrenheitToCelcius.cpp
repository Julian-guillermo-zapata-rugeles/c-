/******************************************************************************

convertir grados Fahrenheit a celcius
c=(f-32)*5 /9
*******************************************************************************/

#include <iostream>
#include <string>
using std::cin;

int main(){
    float f , c ;
    std::cout << "Ingrese la cantidad de Fahrenheit \n";
    std::cin >> f;
    c=((f-32)*5)/9;
    std::cout << "la cantidad en celcius es "<< c <<" Grados ";
    return 0;
    }
