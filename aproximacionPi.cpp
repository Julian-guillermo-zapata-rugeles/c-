#include "iostream"


int main(int argc, char const *argv[]) {
  /* code */
  int  pi ;
  float  valor =0 , inicio = 3 , aproximacion = 1  ;
  std::cout << "Ingrese el numero de interaciones para aproximar a PI por series " << '\n';
  std::cin >> pi;
  for (size_t i = 1; i < pi ; i++ ) {
    if (i%2!=0) {
      valor=-1/inicio;
      inicio=inicio+2;
      aproximacion= aproximacion + valor;

      /* code */
    }
    else{
      valor=1/inicio;
      inicio=inicio+2;
      aproximacion= aproximacion + valor;
    }
  }
    /* code */
  aproximacion=4*(aproximacion);
  std::cout << "El valor aproximado de PI  es " << aproximacion << '\n';



  return 0;
}
