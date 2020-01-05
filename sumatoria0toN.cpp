#include "iostream"

/*

calcular a sumatoria de 0 hasta N


*/

int main(int argc, char const *argv[]) {

  int maximo , contador , sumador ;

  std::cout << "Ingrese un numero para hallar su sumatoria " << '\n';
  std::cin >> maximo;

  for (size_t contador = 0; contador < maximo; contador++) {
    /* code */
    sumador= sumador+ contador;
  }
  sumador = sumador + maximo;
  std::cout << "La sumatoria de 0 --> "<< maximo <<" es "<< sumador << '\n';

  return 0;
}
