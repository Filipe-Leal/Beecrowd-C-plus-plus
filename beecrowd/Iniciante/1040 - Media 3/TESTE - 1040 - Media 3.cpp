#include <iostream>
#include <iomanip>

void umaCasaDecimal(){
  std::cout << std::setprecision(1) << std::fixed;
}

void aprovado(){
  std::cout << "Aluno aprovado." << std::endl;
}

void reprovado(){
  std::cout << "Aluno reprovado." << std::endl;
}

double mediaNotas(double notaUm_func, double notaDois_func, double notaTres_func, double notaQuatro_func){
  double media_func=0;

  media_func = (notaUm_func*2 + notaDois_func*3 + notaTres_func*4 +notaQuatro_func*1)/10;

  return media_func;
}

void saidaMedia(double saida_func){
  std::cout << "Media: " << saida_func << std::endl;
}

void saidaSituacao(double media_func){
  double notaExame=0;

  if(media_func >=7 ){
    aprovado();
  } else if(media_func < 5){
    reprovado();

  } else {
    std::cout << "Aluno em exame." << std::endl;
    std::cin >> notaExame;
    std::cout << "Nota do exame: " << notaExame << std::endl;

    media_func = (media_func+notaExame)/2;
    if(media_func >= 5){
      aprovado();
      std::cout << "Media final: " << media_func << std::endl;

    } else{
      reprovado();
      std::cout << "Media final: " << media_func << std::endl;

    }
  }
}

int main(){
  umaCasaDecimal();

  //VARIAVEIS
  double notaUm=0, notaDois=0, notaTres=0, notaQuatro=0, media=0, notaExame=0;

  //ENTRADA DAS NOTAS
  std::cin >> notaUm >> notaDois >> notaTres >> notaQuatro;

  //MEDIA
  media = mediaNotas(notaUm, notaDois, notaTres, notaQuatro);

  //SAIDA DE DADOS
  saidaMedia(media);
  saidaSituacao(media);


}
