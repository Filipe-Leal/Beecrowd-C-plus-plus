#include<iostream>
#include<iomanip>

using namespace std;


int main(){
  cout << setprecision(2) << fixed;

  int salario=0;

  cout << ((3002-2000)-((3002-2000)%1000))*0.08+ (((3002-2000))%1000*0.18);

  //1000 retira 1000
  //100 retira 500

 // cin >> salario;


  if(salario < 2000.01){
    puts("Isento");

  } else if(salario < 3000.01){



  } else if(salario <= 4500){
    puts("18%");
  } else if(salario > 4500){
    puts("28%");
  }



  return 0;
}
