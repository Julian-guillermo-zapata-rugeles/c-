#include "iostream"
#include "string"
#include "stdlib.h"
int supLine(int longitud);
int squares(int longitud);

int main(int argc, char const *argv[]) {
  /* Imprimir patrones dado un numero  */
  int sizeRoot ;
  std::cout << "Ingrese el numero para generar un cuadrado" << '\n';
  std::cin >> sizeRoot;
  if (sizeRoot==1) {
    std::cout << "No se puede Inicializar con 1 ... Ingrese un numero mayor" << '\n';
    exit(-1);
  }
  supLine(sizeRoot);
  squares(sizeRoot);
  supLine(sizeRoot);
  return 0;
}
int supLine(int longitud){
  for (size_t i = 0; i < longitud; i++) {
    /* code */
    std::cout <<"+";
  }
  std::cout << '\n';
  return 0;
}
int squares(int longitud){
  for (size_t i = 0; i < (longitud-2); i++) {
    std::cout <<"+";
    for (size_t k = 0; k <(longitud-2); k++) {
      std::cout<<" ";
      /* code */
    }
    std::cout << "+"<< '\n';
    /* code */
  }
  return 0;
}
