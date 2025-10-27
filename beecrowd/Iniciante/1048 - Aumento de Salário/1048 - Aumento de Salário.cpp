#include <iostream>
#include <iomanip>

using namespace std;



int main(){
  cout << setprecision(2) << fixed;

  double salario=0;

  cin >> salario;
  fflush(stdin);

  if(salario <= 400.00){
    //0,15 = 15% e 1,00 = 100%, 1,15 = 115% - multiplicado por 1.15 já adiciona o acrescimo

    cout << "Novo salario: " << salario * 1.15 << endl;
    cout << "Reajuste ganho: " << salario * 0.15 << endl;
    cout << "Em percentual: 15 %" << endl;


  } else if(salario <= 800.00){
    cout << "Novo salario: " << salario * 1.12 << endl;
    cout << "Reajuste ganho: " << salario * 0.12 << endl;
    cout << "Em percentual: 12 %" << endl;

  } else if(salario <= 1200.00){
    cout << "Novo salario: " << salario * 1.10 << endl;
    cout << "Reajuste ganho: " << salario * 0.10 << endl;
    cout << "Em percentual: 10 %" << endl;
  } else if(salario <= 2000.00){
    cout << "Novo salario: " << salario * 1.07 << endl;
    cout << "Reajuste ganho: " << salario * 0.07 << endl;
    cout << "Em percentual: 7 %" << endl;
  } else {
    cout << "Novo salario: " << salario * 1.04 << endl;
    cout << "Reajuste ganho: " << salario * 0.04 << endl;
    cout << "Em percentual: 4 %" << endl;
  }

  return 0;
}
