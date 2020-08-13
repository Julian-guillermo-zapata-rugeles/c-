/*
Julian guillermo zapata rugeles
Ejemplo programa que captura maximo 200 char y los convierte a Mayusculas
la función busca y convierte a mayusculas hasta encontrar \0

*/

#include <iostream>
using namespace std;


void minusculasAmayusculas(char *);

int main()
{
    char cadena[200];
    // se inicializa cadena con \0
    for(int x=0;x<200;x++){
        cadena[x]='\0';
    }

    cout<<"ingrese una palabra : ";
    cin.getline(cadena,200);
    minusculasAmayusculas(cadena); // se llama la función
    return 0;
    }

void minusculasAmayusculas(char *ptrArray){
    while (*ptrArray!='\0') {
        if(islower(*ptrArray)){
            *ptrArray=toupper(*ptrArray);

        }
        cout<<*ptrArray;
        ++ ptrArray;
    }
    cout<<endl;
}
