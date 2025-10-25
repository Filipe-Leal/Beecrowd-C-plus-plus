#include<iostream>

using namespace std;

//REFAZER

//USANDO PONTEIRO USAR O ENDERECO DA VARIAVEL resultadoHoras, resultadoMinutos,
// e poder retornar dois valores sem return ou uma mensagem
void calculoMinutos(int minutoInicial_func, int minutoFinal_func,int *resultadoHoras_func, int *resultadoMin_func){

  if(minutoInicial_func<minutoFinal_func){
      *resultadoMin_func=minutoFinal_func-minutoInicial_func;
    } else if(minutoFinal_func<minutoInicial_func){
      *resultadoMin_func=(60-minutoInicial_func)+minutoFinal_func;

      //CONDICAO PARA CORRIGIR O ERRO DE -1, CASO DIGITE HORA IGUAIS
      //ONDE, MIN INICIAL E MAIOR QUE O MIN FINAL, ex: 10h50 - 10h30
      if(*resultadoHoras_func==0){
        *resultadoHoras_func=24;
      }
      *resultadoHoras_func-=1;

    }
}

void saida(int hora_func, int minuto_func){
  cout << "O JOGO DUROU " << hora_func << " HORA(S) E " << minuto_func << " MINUTO(S)" << endl;
}


int main(){
  int horaInicial=0, horaFinal=0, resultadoHoras=0,
      minutoInicial=0, minutoFinal=0, resultadoMinutos=0;

  cin >> horaInicial >> minutoInicial >> horaFinal >> minutoFinal;


  if(horaFinal > horaInicial){
    resultadoHoras = horaFinal-horaInicial;

    //USANDO PONTEIRO USAR O ENDERECO DA VARIAVEL resultadoHoras, resultadoMinutos,
    calculoMinutos(minutoInicial, minutoFinal, &resultadoHoras, &resultadoMinutos);

    saida(resultadoHoras, resultadoMinutos);

  } else if(horaInicial>=horaFinal){

    //CONDICAO ONDE A PARTIDA TERMINA EM MINUTOS EX.: COMECOU 0H00 E TERMINOU 0H10
    if(horaInicial==horaFinal && minutoFinal!=0){
      resultadoHoras=0; //PARA NAO CALCULAR NO FORMATO 24H, E SIM SOMENTE OS MINUTOS

    } else {
      resultadoHoras = (24-horaInicial)+horaFinal;
    }

      calculoMinutos(minutoInicial, minutoFinal, &resultadoHoras, &resultadoMinutos);

      saida(resultadoHoras, resultadoMinutos);
  }

  return 0;
}

/*
Tempo de Jogo com Minutos

Leia a hora inicial, minuto inicial, hora final e minuto final de um jogo. A seguir calcule a duração do jogo.

Obs: O jogo tem duração mínima de um (1) minuto e duração máxima de 24 horas.
Entrada

Quatro números inteiros representando a hora de início e fim do jogo.
Saída

Mostre a seguinte mensagem: “O JOGO DUROU XXX HORA(S) E YYY MINUTO(S)” .
Exemplo de Entrada 	Exemplo de Saída

7 8 9 10


O JOGO DUROU 2 HORA(S) E 2 MINUTO(S)

7 7 7 7


O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)

7 10 8 9


O JOGO DUROU 0 HORA(S) E 59 MINUTO(S)
*/
