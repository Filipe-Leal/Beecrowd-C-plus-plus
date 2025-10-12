#include <iostream>
#include <iomanip>

int main(){
 //VARIAVEIS
 int viagemHoras, velocidadeMediaKm;
 double litros;

 //ENTRADA DE DADOS
 std::cin>>viagemHoras>>velocidadeMediaKm;

 //PROCESSAMENTO DE DADOS
 litros=(viagemHoras*velocidadeMediaKm)/12.0;

 //SAIDA DE DADOS
 std::cout<<std::fixed<<std::setprecision(3)<<litros<<std::endl;

 return 0;
}
