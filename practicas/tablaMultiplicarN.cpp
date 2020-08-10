#include "iostream"

int main(int argc, char const *argv[]) {
  /* code */
  int integerTable ,  result ;
  std::cout << "Ingrese un numero para hallar su tabla de multiplicar" << '\n';
  std::cin >> integerTable;

  for (size_t i = 1; i < 10 ; i++) {
    /* code */
    result=integerTable*i;
    std::cout << integerTable <<"X" << i <<" = "<< result << '\n';
  }

  return 0;
}
