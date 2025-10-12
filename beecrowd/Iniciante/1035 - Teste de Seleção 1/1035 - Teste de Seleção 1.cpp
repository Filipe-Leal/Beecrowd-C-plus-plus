#include <iostream>
#include <stdio.h>
#include <stdlib.h>

void naoAceito(){
  std::cout << "Valores nao aceitos\n";
}

void aceito(){
  std::cout << "Valores aceitos\n";
}


int main(){
  int A=0, B=0, C=0, D=0;

  std::cin >> A >> B >> C >> D;


  if(B>C && D>A && (C+D)>(A+B) && C>0 && D>0 && A%2 == 0){
    aceito();
  } else {
    naoAceito();
  }

  return 0;
}



/*
Leia 4 valores inteiros A, B, C e D. A seguir, se B for maior do que C e
se D for maior do que A, e a soma de C com D for maior que a soma de A e B e se C e D,
ambos, forem positivos e se a variável A for par escrever a mensagem "Valores aceitos", senão escrever "Valores nao aceitos".
Entrada

Quatro números inteiros A, B, C e D.
Saída

Mostre a respectiva mensagem após a validação dos valores.

*/


/*
  if(B>C){
    if(D>A && (C+D)>(A+B)){
      if(C>=0 && D>=0){
        if(A%2 == 0){
          aceito();
        } else {
          naoAceito();
        }
      } else {
        naoAceito();
      }
    } else {
      naoAceito();
    }
  } else {
    naoAceito();
  }

  return 0;
}
*/
