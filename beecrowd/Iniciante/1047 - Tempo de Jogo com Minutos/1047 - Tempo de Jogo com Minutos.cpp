#include<iostream>
#include<iomanip>

using namespace std;

//VARIAVEL GLOBAL
double horaEmSegundos=0, minEmSegundos=0;

double horaInicialEmSegundos(double horaInicial_func){
  horaEmSegundos=0;
  horaEmSegundos = horaInicial_func*3600; //Horas -> Segundos = Horas * 3.600 = Horas em Segundos
  return horaEmSegundos;
}

double horaFinalEmSegundos(double horaFinal_func){
  horaEmSegundos=0;
  horaEmSegundos = horaFinal_func*3600; //Horas -> Segundos = Horas * 3.600 = Horas em Segundos
  return horaEmSegundos;
}

double minInicialEmSegundos(double minInicial_func){
  minEmSegundos=0;
  minEmSegundos = minInicial_func*60;
  return minEmSegundos;
}

double minFinalEmSegundos(double minFinal_func){
  minEmSegundos=0;
  minEmSegundos = minFinal_func*60;
  return minEmSegundos;
}


int main(){
  cout << setprecision(3) << fixed;


  double horaIncial=0, minutoInicial=0,
         horaFinal=0, minutoFinal=0,
         horaTotal=0, minutoTotal,
         minHorInicialSegundos=0,
         minHorFinalSegundos=0;

  cin >> horaIncial >> minutoInicial >> horaFinal >> minutoFinal;

  minHorInicialSegundos=horaInicialEmSegundos(horaIncial)+minInicialEmSegundos(minutoInicial);
  minHorFinalSegundos=horaFinalEmSegundos()

  //AMANHA, NÃO PRECISA DE UMA FUNCAO INICIAL E FINAL, APENAS FUNCAO
  //OS VALORES SAO ARMAZENADOS NAS VARIAVEIS


  cout << minHorSegundos;

  if(horaInicial < horaFinal){

  }


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

e converto para horas e minutos de novo
*/
