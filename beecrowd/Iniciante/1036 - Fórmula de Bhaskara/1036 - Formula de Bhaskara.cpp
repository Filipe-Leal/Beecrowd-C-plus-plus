#include <iostream>
#include <math.h>
#include <iomanip>

int main(){

  std::cout << std::setprecision(5) << std::fixed; //Definindo a precisão de numero decimais como 5 casas

  //TIVE QUE TROCAR TUDO PARA DOUBLE,PQ NO FLOAT DAVA 0,0001 DE ERRO
  double a=0, b=0, c=0;
  double delta=0, xPositivo=0.00, xNegativo=0;

  std::cin >> a >> b >> c;

  delta=(pow(b,2)-4*a*c);

  xPositivo=(-b+(sqrt(delta)))/(2*a);
  xNegativo=(-b-(sqrt(delta)))/(2*a);

  if(a==0 || delta<0){
    std::cout << "Impossivel calcular" << std::endl;
  } else {

    std::cout << "R1 = " << xPositivo << std::endl;
    std::cout << "R2 = " << xNegativo << std::endl;
  }


  return 0;
}
