#include<iostream>

int main(){
  //VARIAVEIS
  int idadeDias;
  double ano, mes, dia;

  //INICIALIZAR
  ano=0;
  mes=0;
  dia=0;

  //ENTRADA DE DADOS
  std::cin >>  idadeDias;

  //PROCESSAMENTO DE DADOS
  ano=idadeDias/365; // Para encontrar o ano, vai dividr o dias por 365 dias
  mes=(idadeDias%365)/30; // Para encontrar o mes, vai encontra o resto do dias por 365 e com o resultado dividir por 30 dias
  dia=(idadeDias%365)%30; //Para encontra o dia,  vai encontra o resto do dias por 365 e com o resultado encontra o resto por 30 dias

  //Ou seja, o resultado da primeira equação idadeDias/365, consegue achar as seguintes
  //A hora é um tudo em que seu resto é o mês. O mês é um todo onde seu resto é os dias.
  //A equação idadeDias/365, vai resulta valor em anos, a equação idadeDias%365, vai resultar o resto em anos, onde deve ser lapidado, dividindo por 30 para o mês...
  //... e encontrará o resto por 30 para os dias

  //O resultado da divisão e resto, vai resultar em anos, onde o resto de anos vai ser retirado o mês, encontrando quantos dias 30(1 Mes) se tem no resto de anos (idadeDias%365)/30.
  // Encontrando o mês,  do resto do mês vai ser encontrado os dias (idadeDias%365)%30, o resto do mês são os dias.


  //SAIDA DE DADOS
  std::cout << ano << " ano(s)" << std::endl;
  std::cout << mes << " mes(es)" << std::endl;
  std::cout << dia << " dia(s)" << std::endl;

  return 0;
}


/*

Leia um valor inteiro correspondente à idade de uma pessoa em dias e informe-a em anos, meses e dias

Obs.: apenas para facilitar o cálculo, considere todo ano com 365 dias e todo mês com 30 dias. Nos casos de teste nunca haverá uma situação que permite 12 meses e alguns dias, como 360, 363 ou 364. Este é apenas um exercício com objetivo de testar raciocínio matemático simples.
Entrada

O arquivo de entrada contém um valor inteiro.
Saída

Imprima a saída conforme exemplo fornecido.


*/
