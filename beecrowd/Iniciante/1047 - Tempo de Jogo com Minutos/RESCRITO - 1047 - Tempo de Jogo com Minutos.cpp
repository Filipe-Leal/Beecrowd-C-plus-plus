#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int conversaoEmSegundos(int horas_func, int minutos_func){
  double horas_Segundos=0, minutos_Segundos=0, somaSegundos=0;

  horas_Segundos = horas_func*3600;
  minutos_Segundos = minutos_func*60;

  somaSegundos=horas_Segundos+minutos_Segundos;

  return somaSegundos;
}

double conversaoEmHoras(double segundos_func){
  double horas=0;
  horas = segundos_func/3600;
  return horas;
}

double separarMinutos_converte (double horas_func){
   double parteInteira=0, parteDecimal=0;

   parteInteira = floor(horas_func);
   parteDecimal = horas_func-parteInteira;

   parteDecimal=parteDecimal*60; //CONVERTENDO HORAS EM MINUTOS

   return parteDecimal;
}

double separarHora(double horas_func){
   double parteInteira=0, parteDecimal=0;

   parteInteira = floor(horas_func);
   return parteInteira;
}

void saida(int horas_func,  double minutos_func){
  cout << "O JOGO DUROU " << horas_func << " HORA(S) E "<< minutos_func <<" MINUTO(S)" << endl;
}

int main(){
  //VARIAVEIS
  int horaInicial=0,       minutoInicial=0,
      horaFinal=0,         minutoFinal,
      inicialEmSegundos=0, finalEmSegundos=0;

  double tudoInicialHoras=0,  tudoFinalHoras=0;

  int horasSegundosTotais=0, duracaoHoras=0;

  double retornoEmHoras=0, duracaoMinutos=0;

  //ENTRADA DE DADOS
  cin >> horaInicial >> minutoInicial >> horaFinal >> minutoFinal; //VISTO

  //CONVERSAO DAS HORAS E MINUTOS EM Segundos
  inicialEmSegundos = conversaoEmSegundos(horaInicial, minutoInicial); //VISTO
  finalEmSegundos = conversaoEmSegundos(horaFinal, minutoFinal); //VISTO


  //TOMADA DE DECISAO
  if(inicialEmSegundos<finalEmSegundos){
    //DIFERENÇA INICIAL E FINAL
    horasSegundosTotais = finalEmSegundos-inicialEmSegundos; //VISTO

    //RETORNAR EM HORAS
    retornoEmHoras = conversaoEmHoras(horasSegundosTotais); //VISTO, FAZ SENTIDO SER DOUBLE

    //SEPARACAO DA HORA E MINUTOS(CONVERSAO DO MINUTOS EM HORAS PARA MINUTOS MUINUTOS
    duracaoHoras = separarHora(retornoEmHoras);           //VISTO
    duracaoMinutos = separarMinutos_converte(retornoEmHoras); //JÁ ESTA EM MINUTOS //VISTO, SE TRANSFORMAR EM INT NÃO CALCULO CERTO

    //FUNCAO DE SAIDA - EVITAR REPETICAO
    saida(duracaoHoras, duracaoMinutos);

  } else if(inicialEmSegundos>=finalEmSegundos){
    horasSegundosTotais = (86400-inicialEmSegundos)+(finalEmSegundos); // 24(horas) == 86400(segundos)

    //RETORNAR EM HORAS
    retornoEmHoras = conversaoEmHoras(horasSegundosTotais);

    //SEPARACAO DA HORA E MINUTOS
    duracaoHoras = separarHora(retornoEmHoras);
    duracaoMinutos = separarMinutos_converte(retornoEmHoras);

    saida(duracaoHoras, duracaoMinutos);
  }
  return 0;
}


/*
*/
