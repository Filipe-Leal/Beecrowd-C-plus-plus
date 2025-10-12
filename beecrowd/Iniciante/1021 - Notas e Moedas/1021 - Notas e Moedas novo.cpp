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

  float valueReal=0.00;
  int i;

  //ENTRADA DE DADOS
  std::cin >> valueReal;
  fflush(stdin);

  std::cout << std::setprecision(2) << std::fixed;

  for(i=0 ; i<=(tmnh-1); i++){
      resultBillCoin[i] = valueReal/billCoin[i];
      valueReal = fmod(valueReal, billCoin[i]);

      //ARREDONDA PARA DUAS CASA DECIMAIS E EVITA PROBLEMAS COM CENTAVOS
      valueReal = std::round(valueReal*100)/100;
      /*
      Funções como round e floor não funcionaram no resultBillCoin[i] = valueReal/billCoin[i];

      Quando decrementava o valor de 576.73, não decrementava os centavos de forma correta
      decrementava em apenas 2 moedas de (0.01) centavos ao invés de 3 moedas de (0.01)

      Então, esse cálculo ele arredonda o valor para duas casas decimas,
      utilizando multiplicação, divisão e a função round(que arredonda até
      número inteiro mais próximmo.
      */

  }


  //SAIDA DE DADOS
  std::cout << "NOTAS:" << std::endl;
  for(i=0; i<6 ; i++){
   // if(billCoin[i] >= 1){
      std::cout << resultBillCoin[i] << " nota(s) de R$ " << billCoin[i] << std::endl;
  //  }
  }

  std::cout << "MOEDAS:" << std::endl;
  for(i=6; i < tmnh ; i++){
    std::cout << resultBillCoin[i] << " moeda(s) de R$ " << billCoin[i] << std::endl;
  }
}
