#include <iostream>

using namespace std;

int main(){
  double horaInicial=0, horaFinal=0, horaTotal=0;

  cin >> horaInicial >> horaFinal;

  if(horaInicial < horaFinal){
    horaTotal = horaFinal-horaInicial; //Ex.: 02h até 16h
  } else {
    horaTotal = (24-horaInicial)+(horaFinal-0); //Ex.: 0h até 0h ou 16h até 2h
  }

  cout << "O JOGO DUROU " << horaTotal << " HORA(S)" << endl;

}

/*

horaTotal = (24-horaInicial)+(horaFinal-0);

Ex.: 14h até as 9h

Calcular as horas do primeiro dia:


    A meia-noite é o fim do dia (24h).
    De 14h para 24h são 10 horas (24 - 14 = 10).

Calcular as horas do segundo dia:

    O segundo dia começa à meia-noite (0h).
    Do início do segundo dia até 09h são 9 horas.

Somar as duas partes:

    10 horas (do primeiro dia) + 9 horas (do segundo dia) = 19 horas.

*/
