 #include <iostream>
 #include <math.h>
 #include <iomanip>


 int main(){
  //VARIAVEIS
  float distancia, xUm, xDois, yUm, yDois;

  //ENTRADA DE DADOS
  std::cin>>xUm>>yUm>>xDois>>yDois;

  //PROCESSAMENTO DE DADOS
  distancia=sqrt( (pow((xDois-xUm), 2)) + (pow((yDois-yUm), 2)) );

  //SAIDA DE DADOS
  std::cout<<std::fixed<<std::setprecision(4)<<distancia<<std::endl;

  return 0;
 }
