#include "iostream"

/*  Capturar el factorial de un numero ingresado  */


int main(int argc, char const *argv[]) {

  int factorial , sumatoria = 1 ;
  std::cout << "Ingrese un numero para calcular su factorial" << '\n';
  std::cin >> factorial;
  for (size_t i = 1; i < factorial+1; i++) {
    /* code */
    sumatoria = sumatoria * i;
  }
  std::cout << "El factorial de "<< factorial <<" es "<< sumatoria << '\n';
  return 0;
}
