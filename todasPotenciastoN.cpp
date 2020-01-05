#include "iostream"

/* hallar potencias */

int main(int argc, char const *argv[]) {
  /* code */

  long int potencia , max_sum ;

  std::cout << "Ingrese un numero a calcular la potencia" << '\n';
  std::cin >> potencia;

  for (size_t static_extern = 1; static_extern < 10; static_extern ++) {
    /* code */
    max_sum=1;
    for (size_t static_inside = 0; static_inside < static_extern; static_inside++) {
      /* code */
      max_sum=max_sum*potencia;
    }
    std::cout << potencia <<" ** " << static_extern << " = "<< max_sum <<'\n';
  }

  return 0;
}
