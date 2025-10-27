/*
NÃO É CÓDIGO DE IA!
ONDE FOI ENCONTRADO:  https://www.codeshikhi.com/2020/12/uri-1047-game-time-with-minutes-solution-in-c-cpp-cpluscplus-python.html
*/


#include<iostream>
using namespace std;

int main(){
  int horaInical, minutoInicial, horaFinal, minutoFinal;
  int diferenca;

  cin >> horaInical >> minutoInicial >> horaFinal >> minutoFinal;

  diferenca = (horaFinal * 60 + minutoFinal) - (horaInical * 60 + minutoInicial);;

  if(diferenca<=0){ //VALOR NEGATIVO INDICA QUE O JOGO VIROU O DIA
    diferenca += 24*60; //EQUIVALE A UM DIA INTEIRO

    /*
    Se o resultado deu negativo, quer dizer que o jogo passou da meia-noite.
    Então adiciono 24 horas (em minutos) pra compensar o dia que virou.
    */
  }
  cout << "O JOGO DUROU " << diferenca/60 << " HORA(S) E " << diferenca%60 << " MINUTO(S)";

}
