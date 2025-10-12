#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<iomanip>


#define tmnh 12

int main(){
  //VARIAVEIS
  float billCoin[tmnh] = {100, 50, 20, 10, 5, 2, 1, 0.50, 0.25, 0.10, 0.05, 0.01};
  int resultBillCoin[tmnh];

  float value[tmnh];
  float valueReal=0.00;
  int i;
  fflush(stdin);

  //ENTRADA DE DADOS
  std::cout << "Digite o valor...: ";
  std::cin >> valueReal;
  fflush(stdin);

  std::cout << std::setprecision(2) << std::fixed;

  for(i=0 ; i<=(tmnh-1); i++){
      resultBillCoin[i] = valueReal/billCoin[i];
      value[i] = fmod(valueReal, billCoin[i]);
      valueReal = value[i];
  }

/*
      std::cout << "SAIDAS" << std::endl;
      std::cout << "resultBillCoin[i] " << resultBillCoin[i] << std::endl;
      std::cout << "valueReal " << valueReal << std::endl;
      std::cout << "billCoin[i] " << billCoin[i] << std::endl;
      std::cout << "value[i] " << value[i] << std::endl;
      std::cout << "valueReal " << resultBillCoin[i] << std::endl;
      std::cout << "value[i] " << value[i] << std::endl;

      std::cout << " " << std::endl;
      std::cout << " " << std::endl;
*/


  //SAIDA DE DADOS
  std::cout << billCoin[i] << "NOTAS: " << std::endl;
  for(i=0; i<=(tmnh-1) ; i++){
    std::cout << resultBillCoin[i] << " nota (s)  de R$ " << billCoin[i] << std::endl;
  }



}
