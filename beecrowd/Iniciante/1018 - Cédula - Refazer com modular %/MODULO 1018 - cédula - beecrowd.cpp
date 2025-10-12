<<<<<<< HEAD
#include <iostream>
#include<iomanip>

int main(){
 //VARIAVEIS
 int valorTeste, valorOriginal, notaCem, notaCinquenta, notaVint, notaDez, notaCinco, notaDois, notaUm;

 //INICIALIZAR
 notaCem=0;
 notaCinquenta=0;
 notaVint=0;
 notaDez=0;
 notaCinco=0;
 notaDois=0;
 notaUm=0;

 //ENTRADA DE DADOS
 std::cin>>valorOriginal;
 std::cout<<valorOriginal<<std::endl;

//100
notaCem = valorOriginal/100;
valorOriginal %=100; //valorOriginal = valorOriginal%100;

/*
Exemplo
notaCem = valorOrginial/100;
5 = 545/100;

545/100 = 5


valorOriginal %=100;...| valorOriginal = valorOriginal % 100;
45 %=100;..............|45 = 545 % 100;

*/


//50
notaCinquenta = valorOriginal/50;
valorOriginal %=50; //valorOriginal = valorOriginal%50;


//20
notaVint = valorOriginal/20;
valorOriginal %=20; //valorOriginal = valorOriginal%20;


//10
notaDez = valorOriginal/10;
valorOriginal %=10; //valorOriginal = valorOriginal%10;


//5
notaCinco = valorOriginal/5;
valorOriginal %=5; //valorOriginal = valorOriginal%5;


//2
notaDois = valorOriginal/2;
valorOriginal %=2; //valorOriginal = valorOriginal%2;


//1
notaUm = valorOriginal/1;
valorOriginal %=1; //valorOriginal = valorOriginal%1;


 //PROCESSAMENTO E SAÍDA DADOS
 std::cout<<notaCem<<" nota(s) de R$ 100,00"<<std::endl; //100
 std::cout<<notaCinquenta<<" nota(s) de R$ 50,00"<<std::endl; //50
 std::cout<<notaVint<<" nota(s) de R$ 20,00"<<std::endl; //20
 std::cout<<notaDez<<" nota(s) de R$ 10,00"<<std::endl; //10
 std::cout<<notaCinco<<" nota(s) de R$ 5,00"<<std::endl; //5
 std::cout<<notaDois<<" nota(s) de R$ 2,00"<<std::endl; //2
 std::cout<<notaUm<<" nota(s) de R$ 1,00"<<std::endl; //1

 return 0;
}

=======
#include <iostream>
#include<iomanip>

int main(){
 //VARIAVEIS
 int valorTeste, valorOriginal, notaCem, notaCinquenta, notaVint, notaDez, notaCinco, notaDois, notaUm;

 //INICIALIZAR
 notaCem=0;
 notaCinquenta=0;
 notaVint=0;
 notaDez=0;
 notaCinco=0;
 notaDois=0;
 notaUm=0;

 //ENTRADA DE DADOS
 std::cin>>valorOriginal;
 std::cout<<valorOriginal<<std::endl;

//100
notaCem = valorOriginal/100;
valorOriginal %=100; //valorOriginal = valorOriginal%100;

/*
//AQUI DESCOBRE QUANTOS 100 EXISTEM EM 545
Exemplo
notaCem = valorOrginial/100;
5 = 545/100;

545/100 = 5

//AQUI DESCOBRE O RESTO QUE OS 100 DEIXOU EM 545
valorOriginal %=100;... == valorOriginal = valorOriginal % 100;
45 %=100;.............. == 45 = 545 % 100;

*/


//50
notaCinquenta = valorOriginal/50;
valorOriginal %=50; //valorOriginal = valorOriginal%50;


//20
notaVint = valorOriginal/20;
valorOriginal %=20; //valorOriginal = valorOriginal%20;


//10
notaDez = valorOriginal/10;
valorOriginal %=10; //valorOriginal = valorOriginal%10;


//5
notaCinco = valorOriginal/5;
valorOriginal %=5; //valorOriginal = valorOriginal%5;


//2
notaDois = valorOriginal/2;
valorOriginal %=2; //valorOriginal = valorOriginal%2;


//1
notaUm = valorOriginal/1;
valorOriginal %=1; //valorOriginal = valorOriginal%1;


 //PROCESSAMENTO E SAï¿½DA DADOS
 std::cout<<notaCem<<" nota(s) de R$ 100,00"<<std::endl; //100
 std::cout<<notaCinquenta<<" nota(s) de R$ 50,00"<<std::endl; //50
 std::cout<<notaVint<<" nota(s) de R$ 20,00"<<std::endl; //20
 std::cout<<notaDez<<" nota(s) de R$ 10,00"<<std::endl; //10
 std::cout<<notaCinco<<" nota(s) de R$ 5,00"<<std::endl; //5
 std::cout<<notaDois<<" nota(s) de R$ 2,00"<<std::endl; //2
 std::cout<<notaUm<<" nota(s) de R$ 1,00"<<std::endl; //1

 return 0;
}

>>>>>>> b01f12f8218301bc1fe0df768944f48cc99d8143
