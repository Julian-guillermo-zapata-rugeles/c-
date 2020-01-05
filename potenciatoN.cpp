#include "iostream"


int main(int argc, char const *argv[]) {


  int base , potencia , total;
  std::cout << "ingrese dos numeros (base y potencia)" << '\n';
  std::cin >> base >> potencia;
  total=1;
  for (size_t i = 0; i < potencia; i++) {
    /* code */
    total=total*base;

  }
  std::cout << "total " << total << '\n';
  return 0;
}
