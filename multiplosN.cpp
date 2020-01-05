#include "iostream"


int main(int argc, char const *argv[]) {
  /* code */

  int multiplo ;
  std::cout << "Ingrese un numero para hallar sus multiplos de 1 a 100" << '\n';
  std::cin >> multiplo;

  for (size_t i = 1; i < 100; i++) {
    if (i%multiplo==0) {
      /* code */
      std::cout << i <<" Es un multiplo de  "<< multiplo << '\n';
    }
  }
  std::cout << "completado." << '\n';
  return 0;
}
