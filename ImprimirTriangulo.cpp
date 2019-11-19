
// imprime un simple triangulo dada la cantidad Numerica que se ingrese


#include <iostream>
#include <string>
using std::cin;

int main(){
    int numero;
    std::string temp;
    std::cout << "##############################################\n";
    std::cout << "Ingrese un numero Para crear una Piramide \n" ;
    std::cin >> numero;
    for(int i=0; i<numero ; i++){
        temp+="*";
        std::cout << temp <<"\n";
        }
    return 0;
    }
