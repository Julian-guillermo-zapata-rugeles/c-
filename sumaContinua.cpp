#include "iostream"

int main(int argc, char const *argv[]) {
  /* code */

  int suma=0 , num=0 ;
  bool condition = false ;
  std::cout << "Ingrese un numero para sumar " << '\n';
  std::cout << "para finalizar ingrese el numero 0" << '\n';

  while (condition==false) {
    /* code */
    std::cout << "Numero >> " ;
    std::cin >> num;
    if (num==0) {
      /* code */
      condition=true;
    }
    else{
      suma=suma+num;

    }
  }
  std::cout << "La suma total es " << suma << '\n';
  return 0;
}
