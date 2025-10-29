#include<iostream>
#include<string.h>

using namespace std;

int main(){

  char palavra[20];


  fgets(palavra, 20, stdin);
  fflush(stdin);

  if((strcmp(palavra,"teste")==0)){
    puts("asdasdas");

  } else{
    puts("zdasd");
  }



  return 0;
}
