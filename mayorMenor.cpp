#include "iostream"


int main(int argc, char const *argv[]) {
  /* retornar el numero mayor  */
  int num1 , num2 ;
  std::cout << "Ingrese dos numeros  " << '\n';
  std::cin >> num1 >> num2 ;

  if (num1>num2) {
    /* code */
    std::cout << num1 <<" es mayor que "<<num2 << '\n';
  }
  else if(num1==num2){
    std::cout << "AMBOS NUMEROS SON IGUALES" << '\n';
  }
  else {
    std::cout << num2 <<" es mayor que "<<num1 << '\n';
  }
  return 0;
}
