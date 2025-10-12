#include <iostream>

#define N 3
int main(){
  int valores[N], original[N];
  int i, j, aux;

  for(i=0;i<=(N-1);i++){
    std::cin >> valores[i];
    original[i] = valores[i];
  }

  for(i=0;i<=(N-1);i++){
    for(j=0;j<=(N-1);j++){
      if(valores[i] < valores[j]){
        aux = valores[i];
        valores[i] = valores[j];
        valores[j] = aux;
      }
    }
  }

  for(i=0;i<=(N-1);i++){
    std::cout << valores[i] << std::endl;
  }

  std::cout << std::endl;

  for(i=0;i<=(N-1);i++){
    std::cout << original[i] << std::endl;
  }
}
