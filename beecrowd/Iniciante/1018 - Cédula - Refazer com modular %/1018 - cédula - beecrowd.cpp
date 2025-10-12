#include <iostream>
#include<iomanip>

int main(){
 //VARIAVEIS
 int valorOriginal, notaCem, notaCinquenta, notaVint, notaDez, notaCinco, notaDois, notaUm;
 float valorManipulado;

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
 valorManipulado=valorOriginal;


//100
 if(valorManipulado>=100){
  while(1){

    valorManipulado = valorManipulado-100;
    notaCem++;
    if(valorManipulado<100){
     break;
    }

  }
 }

//50
if(valorManipulado>=50){
 while(1){
    valorManipulado = valorManipulado-50;
    notaCinquenta++;
    if(valorManipulado<50){
     break;
    }
  }
}

//20
if(valorManipulado>=20){
 while(1){
    valorManipulado = valorManipulado-20;
    notaVint++;
    if(valorManipulado<20){
     break;
    }
  }
}


//10
if(valorManipulado>=10){
 while(1){
    valorManipulado = valorManipulado-10;
    notaDez++;
    if(valorManipulado<10){
     break;
    }
  }
}

//5
if(valorManipulado>=5){
 while(1){
    valorManipulado = valorManipulado-5;
    notaCinco++;
    if(valorManipulado<5){
     break;
    }
  }
}

//2
if(valorManipulado>=2){
 while(1){
    valorManipulado = valorManipulado-2;
    notaDois++;
    if(valorManipulado<2){
     break;
    }
  }
}

//1
if(valorManipulado>=1){
 while(1){
    valorManipulado = valorManipulado-1;
    notaUm++;
    if(valorManipulado<1){
     break;
    }
  }
}

 //PROCESSAMENTO E SAÍDA DADOS

 std::cout<<valorOriginal<<std::endl;
 std::cout<<notaCem<<" nota(s) de R$ 100,00"<<std::endl; //100
 std::cout<<notaCinquenta<<" nota(s) de R$ 50,00"<<std::endl; //50
 std::cout<<notaVint<<" nota(s) de R$ 20,00"<<std::endl; //20
 std::cout<<notaDez<<" nota(s) de R$ 10,00"<<std::endl; //10
 std::cout<<notaCinco<<" nota(s) de R$ 5,00"<<std::endl; //5
 std::cout<<notaDois<<" nota(s) de R$ 2,00"<<std::endl; //2
 std::cout<<notaUm<<" nota(s) de R$ 1,00"<<std::endl; //1

 return 0;
}
