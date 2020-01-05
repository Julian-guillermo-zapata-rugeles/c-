#include "iostream"


int reverseNum(int num );

int main(int argc, char const *argv[]) {

  /* revertir un numero para saber si es palindromo  */
  int num , responseFunction;
  std::cout << "Ingrese un numero para verificar si es palindromo" << '\n';
  std::cin >> num;
  responseFunction=reverseNum(num);
  if (responseFunction==num) {
    /* code */
    std::cout << num <<"  Es palindromo! pues ---> " << responseFunction << '\n';
  }
  else{
    std::cout <<num << "  No es palindromo! pues --->  "<<responseFunction << '\n';
  }

  return 0;
}

int reverseNum(int num){
  int response;
  while (num > 0) {
    response=response + num% 10;
    response=response*10;
    num=num/10;
    /* code */
  }
  return response/10;
}
