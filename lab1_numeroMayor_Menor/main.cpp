// introducir dos numeros y averiguar quien es mayor/menor

#include <iostream>

using namespace std;

int main()
{
    int numero1=0 , numero2=0 ;
    cout << "Introduce el primer numero  : "; cin>>numero1;
    cout << "Introduce el segundo numero : "; cin>>numero2;
    if(numero1>numero2){
        cout<<numero1<<" es mayor que "<<numero2<<endl;
    }
    else if (numero2>numero1){
        cout<<numero2<<" es mayor que "<<numero1<<endl;
    }
    else{
        cout<<"los numeros son iguales"<<endl;
    }

    return 0;
}
