// julian guillermo zapata rugeles 2020

// crear una función generica usando platillas
// para este ejemplo vámos a crear una función que sume 3 valores
// independiente de su tipo , int double , etc ...
#include <iostream>

using namespace std;

template<class generic>

generic sumarNumeros(generic a,generic b,generic c){
    return(a+b+c);
};

int main()
{
    cout << "Suma enteros y doubles" << endl;
    cout << sumarNumeros(2,3,4) <<endl;
    cout << sumarNumeros(2.1,0.1,9.4) <<endl;
    return 0;
}
