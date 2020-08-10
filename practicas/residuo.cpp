#include "iostream"
int main(int argc, char const *argv[]) {
  /* retornar el residuo de dividir dos numeros enteros */
  int dividendo , divisor , residuo ;
  std::cout << "Ingrese dos numeros  " << '\n';
  std::cin >> dividendo >> divisor;
  residuo= (dividendo % divisor);
  std::cout << "El residuo de dividir "<<dividendo<<"/"<<divisor << " --->  "<< residuo <<'\n';
  return 0;
}
