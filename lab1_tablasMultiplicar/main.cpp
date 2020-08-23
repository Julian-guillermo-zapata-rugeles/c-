// Crear Tablas de multiplicar
// 2020 julian Guillermo Zapata Rugeles

#include <iostream>
#include <iomanip>

void mostrarTabla(unsigned long int & , unsigned long int &);

int main()
{
    unsigned long int numero=0,  maximo=0;
    std::cout << "Ingrese un Numero para mostrar su tabla " << std::endl;
    std::cout << "Numero  : " ; std::cin >> numero;
    std::cout << "1 hasta : "; std::cin >> maximo;
    mostrarTabla(numero,maximo);
    return 0;
}

void mostrarTabla(unsigned long int &numero , unsigned long int &hasta){
    for(unsigned int i=1;i<=hasta;i++){
        std::cout << std::left << std::fixed << numero << " x " << std::setw(10)<< i << (i*numero) << std::endl;
    }
}
