#include<iostream>
#include<locale.h>
#include <math.h>


int main(){
  //VARIAVEIS
  float value=0;
  int billCem=0, billCinquenta=0, billVinte=0, billDez=0, billCinco=0, billDois=0;

  //ENTRADA DE DADOS
  std::cout << "Digite o valor...: " << std::endl;
  std::cin >> value;
  fflush(stdin);

/*
  billCem = value/100;
  [ ] = 545/100; Quantos 100 tem em 545?
  [5] = 545/100; 5

  value = fmod(value, 100);
  [545] = 545%100; Quanto 100 deixa em 545?
  [45]  = 545%100; 45
  */

  //100  
  billCem = value/100;
  value = fmod(value, 100); //modulo (%) para float
  
  //50
  billCem = value/50;
  value = fmod(value, 50);

  //20
  billVinte = value/20;
  value = fmod(value, 20);

  //10
  billDez = value/10;
  value = fmod(value, 10);

  //5
  billCinco = value/5;
  value = fmod(value, 5);

  //2
  billDois = value/2;
  value = fmod(value, 2);

  std::cout << billCem << " Valor: " << value << " nota (s) de R$ 100.00 " << std::endl;
  std::cout << billCinquenta << " Valor: " << value << " nota (s) de R$ 50.00 " << std::endl;
  std::cout << billVinte << " Valor: " << value << " nota (s) de R$ 20.00 " << std::endl;
  std::cout << billDez << " Valor: " << value << " nota (s) de R$ 10.00 " << std::endl;
  std::cout << billCinco << " Valor: " << value << " nota (s) de R$ 5.00 " << std::endl;
  std::cout << billDois << " Valor: " << value << " nota (s) de R$ 2.00 " << std::endl;

}


/*

Leia um valor de ponto flutuante com duas casas decimais. Este valor representa um valor monetário. A seguir, 
calcule o menor número de notas e moedas possíveis no qual o valor pode ser decomposto. 
As notas consideradas são de 100, 50, 20, 10, 5, 2. As moedas possíveis são de 1, 0.50, 0.25, 0.10, 0.05 e 0.01. 
A seguir mostre a relação de notas necessárias.

Entrada

O arquivo de entrada contém um valor de ponto flutuante N (0 ≤ N ≤ 1000000.00).
Saída

Imprima a quantidade mínima de notas e moedas necessárias para trocar o valor inicial, conforme exemplo fornecido.

Obs: Utilize ponto (.) para separar a parte decimal.
*/