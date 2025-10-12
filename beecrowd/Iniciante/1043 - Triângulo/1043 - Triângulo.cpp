#include <iostream>
#include <iomanip>

int main(){
  std::cout << std::setprecision(1) << std::fixed;

  double A=0, B=0, C=0, perimetro=0, area=0;

  std::cin >> A >> B >> C;
  fflush(stdin);

  if(((A+B) > C) && ((A+C) > B) && ((B+C) > A)){ //Desigualdade Triangular - a + b > c, a + c > b, b + c > a
    perimetro = A+B+C; //Perimetro é a soma de todo os lado, A+B+C ou A*3(se forem iguais)
    std::cout << "Perimetro = " << perimetro << std::endl;
  } else {
    area = ((A+B)*C)/2; //area = (B maior+ base menor) * h) /2
    std::cout << "Area = " << area << std::endl;
  }




}
/*
Desigualdade Triangular
a + b > c
a + c > b
 b + c > a
*/
