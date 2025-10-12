#include <iostream>
#include <iomanip>

void aprovado(){
  std::cout << "Aluno aprovado." << std::endl;
}

void reprovado(){
  std::cout << "Aluno reprovado." << std::endl;
}


int main(){
  std::cout << std::setprecision(1) << std::fixed;
  double notaUm=0, notaDois=0, notaTres=0, notaQuatro=0, media=0, notaExame=0;

  //ENTRADA DOS NUMEROS
  std::cin >> notaUm >> notaDois >> notaTres >> notaQuatro;

  media = ((notaUm*2) + (notaDois*3) + (notaTres*4) + (notaQuatro*1))/10;

  //SAIDA DE DADOS
  std::cout << "Media: " << media << std::endl;

  if(media >= 7){
    aprovado();

  } else if(media < 5.0){
    reprovado();

  } else{ // entre 5.0 e 6.9

    std::cout << "Aluno em exame." << std::endl;
    std::cin >> notaExame;

    std::cout << "Nota do exame: " << notaExame << std::endl;

    media = (media+notaExame)/2; //NOVA MEDIA

    if(media >= 5){
      aprovado();
      std::cout << "Media final: " << media << std::endl;

    } else {
      reprovado();
      std::cout << "Media final: " << media << std::endl;

    }
  }

  return 0;
}
