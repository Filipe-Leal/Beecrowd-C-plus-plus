#include<iostream>

using namespace std;

int main(){
  int horaInicial=0, horaFinal=0, resultadoHoras=0
      minutoInicial=0, minutoFinal=0, resultadoMinutos=0;

 // cin >> horaInicial >> horaFinal;
  cin >> minutoInicial >> minutoFinal;

  if(horaFinal > horaInicial){
    resultadoHoras = horaFinal-horaInicial;
    cout << "O JOGO DUROU " << resultadoHoras << " HORA(S)" << endl;
  } else if(horaInicial>=horaFinal){
    resultadoHoras = (24-horaInicial)+(horaFinal);
    cout << "O JOGO DUROU " << resultadoHoras << " HORA(S)" << endl;
  }

  if(minutoFinal>minutoInicial){
    resultadoMinutos=minutoFinal-minutoInicial;
  } else if(minutoIncial>=minutoFinal){
    resultadoMinutos=;
  }


  return 0;
}
