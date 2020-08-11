/*
El objetivo de este algoritmo es calcular la probabilidad de caer
una cara de un dado (6 caras), representado por el numero 1,2,3,4,5,6 respectivamente.
se usa la función srand y time para la semilla , y rand para generar las caras.
se iterará N veces como indique el usuario.

*/

#include <iostream>
#include <time.h>
#include <iomanip>
void calcularPorcentaje(int *);


using namespace std;
int main()
{
    unsigned long int iteraciones=0 , cara_aleatoria=0;
    int caras[6]={0,0,0,0,0,0};

    srand(time(0));
    std::cout<<"Ingrese un número para iterar : "; std::cin>>iteraciones;
    for(unsigned int i=0;i<iteraciones;i++){
        cara_aleatoria=1 + rand() % 6; // se genera el número aleatorio
        //std::cout<<cara_aleatoria<<std::endl;
        // añadiremos los posibles casos y sumaremos la cantidad de veces que cae una cara
        switch (cara_aleatoria) {
        case 1:
            caras[0]=caras[0]+1;
            break;
        case 2:
            caras[1]=caras[1]+1;
            break;
        case 3:
            caras[2]=caras[2]+1;
            break;
        case 4:
            caras[3]=caras[3]+1;
            break;
        case 5:
            caras[4]=caras[4]+1;
            break;
        case 6:
            caras[5]=caras[5]+1;
            break;
        default:
            std::cout<<"valor inesperado"<<std::endl;
        }
    }
    calcularPorcentaje(caras);
}

void calcularPorcentaje(int *puntero){
    int total=0;
    double promedio=0;
    for(int i=0;i<6;i++){
        //std::cout<<*(puntero+i)<<std::endl;//
        total=total+(*(puntero+i));
    }
    for(int i=0;i<6;i++){
        promedio=(100*(*(puntero+i)))/total;
        std::cout<<"La probabilidad de que caiga "<<i<<" es de "<<promedio<<" % "<<std::setw(10)<<*(puntero+i)<<std::endl;
    }
}
