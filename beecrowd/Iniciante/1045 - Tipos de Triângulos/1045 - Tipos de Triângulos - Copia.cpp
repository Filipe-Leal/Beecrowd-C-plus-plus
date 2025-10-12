#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){
  cout << setprecision(1) << fixed;

  double A=0, B=0, C=0, aux=0;

  cin >> A >> B >> C;

  if(B>A){
    aux=A;
    A=B;
    B=aux;
  } if(C>A){
    aux=A;
    A=C;
    C=aux;
  } if(C>B){
    aux=B;
    B=C;
    C=aux;
  }

  if(A>=(B+C)){
    cout << "NAO FORMA TRIANGULO" << endl;
  } else if( pow(A,2) == pow(B,2) + pow(C,2) ){
    cout << "TRIANGULO RETANGULO" << endl;
  } else if(pow(A,2) > pow(B,2)+pow(C,2)){
    cout << "TRIANGULO OBTUSANGULO" << endl;
  } else if(pow(A,2) < pow(B,2)+pow(C,2)){
    cout << "TRIANGULO ACUTANGULO" << endl;
  } if(A==B && B==C){
    cout << "TRIANGULO EQUILATERO" << endl;
  } else if(A==B || B==C || A==C){
    cout << "TRIANGULO ISOSCELES" << endl;
  }
}
