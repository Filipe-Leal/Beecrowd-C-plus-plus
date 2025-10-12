#include <iostream>


int main(){
  double valor;

  std::cin >> valor;

    if(valor >= 0 && valor <= 25){
    std::cout << "Intervalo [0,25]" << std::endl;
  } else if(valor >= 25 && valor <= 50){
    std::cout << "Intervalo (25,50]" << std::endl;
  } else if (valor >= 50 && valor <= 75){
    std::cout << "Intervalo (50,75]" << std::endl;
  } else if(valor >= 75 && valor <= 100){
    std::cout << "Intervalo (75,100]" << std::endl;
  } else {
    std::cout << "Fora de intervalo" << std::endl;
  }


  return 0;
}

// OUTRA ALTERNATIVA

/*
  if(valor >= 0 && valor <= 25){
    std::cout << "Intervalo (0,25]" << std::endl;
  } else if(valor >= 25 && valor <= 50){
    std::cout << "Intervalo (25,50]" << std::endl;
  } else if (valor >= 50 && valor <= 75){
    std::cout << "Intervalo (50,75]" << std::endl;
  } else if(valor >= 75 && valor <= 100){
    std::cout << "Intervalo (75,100]" << std::endl;
  } else {
    std::cout << "Fora de intervalo" << std::endl;
  }
*/


/*  for(i=0; i<=(tnh-1);i++){
    if(valor >= inicioIntervalo[i] && valor <= fimIntervalo[i]){

      //SAIDA COM [  ] em 0 ,25 OS demais saem (75, 100]
      if(valor >= 0 && valor <= 25){
        std::cout << "Intervalo [" << inicioIntervalo[i] << "," << fimIntervalo[i] << "]" << std::endl;
        break;
      } else {
        std::cout << "Intervalo (" << inicioIntervalo[i] << "," << fimIntervalo[i] << "]" << std::endl;
        break;
      }



    } else if(valor > fimIntervalo[3] || valor < fimIntervalo[0]){
      std::cout << "Fora de intervalo" << std::endl;
      break;
    }

  }
*/
