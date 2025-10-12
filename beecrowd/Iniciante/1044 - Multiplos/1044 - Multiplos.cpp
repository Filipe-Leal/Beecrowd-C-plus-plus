#include <iostream>

void saoMultiplos(){
  std::cout << "Sao Multiplos" << std::endl;
}

void naoMultiplos(){
  std::cout << "Nao sao Multiplos" << std::endl;
}

int main(){
  int A=0, B=0;

  std::cin >> A >> B;

  if(A>B){
    if((A%B) == 0){
      saoMultiplos();
    } else {
      naoMultiplos();
    }//else

  } else { // else (A>B)
    if((B%A) == 0){
      saoMultiplos();
    } else{
      naoMultiplos();
    }
  }

}
