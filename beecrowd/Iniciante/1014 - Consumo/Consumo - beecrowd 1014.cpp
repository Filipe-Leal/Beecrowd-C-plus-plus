#include <iostream>
#include <iomanip>

int main(){
 //VARIAVEIS
 int x; //km
 float y, consumoMedio; //gasolina

 //ENTRADA DE DADOS
 std::cin>>x;
 std::cin>>y;

 //PROCESSAMENTO
 consumoMedio=x/y;

 //SAIDA DE DADOS
 std::cout<<std::fixed << std::setprecision(3) << consumoMedio << " km/l" << std::endl;

 return 0;
}
