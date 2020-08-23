/*
Crear un programa que reciba un numero n y realize la sumatoria de 0 hasta n
2020

                          SIMPLE SUMATORIA DE 0 -> N
*/
#include <iostream>



int main()
{
    unsigned long int n=0; // 8 bytes unsigned long int
    unsigned long int sumatoria=0;

    std::cout << "Sumatoria de un numero desde 0 hasta N " << std::endl;
    std::cout<<"n : ";std::cin>>n;

    for(unsigned long int i=0;i<=n;i++){
        sumatoria+=i;
    }
    std::cout<<"Sumatoria de 0 --> "<< n <<"  =  "<<sumatoria<<std::endl;
    std::cout <<"Memoria usada N: "<< sizeof (n)<<" bytes"<<std::endl;
    std::cout <<"Memoria usada S: "<< sizeof (sumatoria)<<" bytes"<<std::endl;
    return 0;
}
