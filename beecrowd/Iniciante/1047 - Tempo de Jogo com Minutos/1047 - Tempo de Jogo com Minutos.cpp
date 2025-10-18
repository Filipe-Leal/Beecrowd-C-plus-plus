#include<iostream>
#include<iomanip>

using namespace std;

double horaMinEmSegundos(double horas_func, double minutos_func){
  double saidaSomaSegundos=0, minutosSegundos=0, horasSegundos=0;

  horasSegundos=horas_func*3600;
  minutosSegundos=minutos_func*60;

  saidaSomaSegundos=horasSegundos+minutosSegundos;

  return saidaSomaSegundos;
}

void doubleParaChar(){

}

int main(){
  cout << setprecision(3) << fixed;


  double horaIncial=0, minutoInicial=0,
         horaFinal=0, minutoFinal=0,
         horaTotal=0, minutoTotal,
         minHorInicialSegundos=0,
         minHorFinalSegundos=0,
         difMinHor=0, voltaHoras=0;

  cin >> horaIncial >> minutoInicial >> horaFinal >> minutoFinal;

  minHorInicialSegundos = horaMinEmSegundos(horaIncial, minutoInicial);
  minHorFinalSegundos = horaMinEmSegundos(horaFinal, minutoFinal);

  cout << " " << minHorFinalSegundos;


  /*if(){

    voltaHoras=difMinHor/3600;
    cout << "asdasd" << voltaHoras;
}*/




 /* if(horaIncial < horaFinal){
    horaTotal = (horaFinal-horaIncial);

    if(minutoInicial>minutoFinal){
      minutoTotal = minutoInicial-minutoFinal;
    } else {
      minutoTotal = minutoFinal-minutoInicial;
    }

  } else {
    horaTotal = (24-horaIncial)+(horaFinal-0);
  }*/

  cout << "O JOGO DUROU " << horaTotal << " HORA(S) E " << minutoTotal << " MINUTO(S)"  << endl;

  return 0;
}

/*
transformo a hora e minutos de entrada em segundos - FEITO

Transforma todo mundo em segundos;
Soma a horaInicial que está em segundo com o minutoInicial que está em segundos
E faz o mesmo com horaFinal e minutoFinal
se horaFinal > horaInicial
  faz a diferença entre os segundos, converte para horas, mantém a hora. E se-
para os minutos em horas e transforma em minutos minutos.

Separo a parte inteira da decimal
-> Transformo em string(vetor de char) e separo

e converto para horas e minutos de novo
*/
