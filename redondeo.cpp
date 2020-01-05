#include "iostream"
#include "math.h"

int main(int argc, char const *argv[]) {

  int num1 , num2 , resultado ;

  std::cout << "Ingrese dos numeros " << '\n';
  std::cin >> num1 >> num2 ;

  resultado = num1/num2;

  std::cout << "resultado es " << round(resultado) << '\n';

  return 0;
}
