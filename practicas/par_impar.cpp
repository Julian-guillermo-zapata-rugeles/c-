#include "iostream"
int main(int argc, char const *argv[]) {
  /* code */
  int numero ;
  std::cout << "Ingrese un numero" << '\n';
  std::cin >> numero;
  if (numero%2==0) {
    /* code */
    std::cout << "PAR" << '\n';
  }
    else
    {
      std::cout << "IMPAR" << '\n';
  }
  return 0;
}
