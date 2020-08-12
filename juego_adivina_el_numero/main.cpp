/*
El objetivo de este juego es tratar de adivinar un número entre 1 a 1000
el jugador tendrá 10 intentos antes de perder
se dará pista sobre el número durante cada pregunta

*/
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
    srand(time(0)); // semilla basada en time para elegir un número aleatorio
    int numero=1+rand()%1000; // se genera un número aleatorio
    int prueba=0;
    bool finish=false;
    for(unsigned int i=0; i <= 10;i++){
        cout << "Intento "<< i<< " de 10"<<endl;
        cout << "Ingrese un número : ";cin>>prueba;
        if(prueba > numero){
            cout<<"¡el número es menor!"<<endl;
        }
        else if(prueba<numero) {
            cout<<"¡el número es mayor!"<<endl;
        }
        else{
            cout<<"¡ GANASTE !"<<endl;
            finish=true;
            break;
        }
    }
    if(finish==false){
        cout << "Perdiste ! "<<endl;
    }
    cout << "el juego finalizó :D el número al azar fué"<<numero<<endl;
    return 0;
}
