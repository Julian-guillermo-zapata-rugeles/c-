#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <time.h>

void generateNumbers(void);

int main()
{
    char iniciar=0;
    std::cout<<"Presione cualquier letra y enter para iniciar"<<std::endl;
    std::cin>>iniciar;
    //imprimir numeros aleatorios ordenados tipo tabla
    srand(time(0)); // los números aleatorios se generan correctamente.
    for(int i=0;i<10000;i++){
        generateNumbers();
    }
    return 0;
}

void generateNumbers(void){
    for(int i =1;i<101;i++){
        std::cout << std::setw(10) << (100000 + std::rand() % 2000000 );
        if(i%10==0){
            std::cout<<std::endl;
        }
    }
}
