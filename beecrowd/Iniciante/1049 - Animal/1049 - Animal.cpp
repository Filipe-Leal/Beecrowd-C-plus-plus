#include<iostream>
#include<string.h>
#include<cctype>

using namespace std;

int main(){

  char palavra[20];


  fgets(palavra, sizeof(palavra), stdin);
  fflush(stdin);

  palavra[strcspn(palavra, "\n")]='\0'; //Retira "\0" que o fgets aloca no final do caractere

  if((strcmp(palavra,"vertebrado")==0)){
    fgets(palavra, sizeof(palavra), stdin);
    palavra[strcspn(palavra, "\n")]='\0';

    if(strcmp(palavra,"ave")==0){
      fgets(palavra, sizeof(palavra), stdin);
      palavra[strcspn(palavra, "\n")]='\0';

      if(strcmp(palavra,"carnivoro")==0){
        puts("aguia");
        //ACABA AQUI
      } else if(strcmp(palavra,"onivoro")==0){
        puts("pomba");
        //ACABA AQUI
      }
    } else if(strcmp(palavra,"mamifero")==0){
      fgets(palavra, sizeof(palavra), stdin);
      palavra[strcspn(palavra, "\n")]='\0';

      if(strcmp(palavra,"onivoro")==0){
        puts("homem");
        //ACABA AQUI
      }else if(strcmp(palavra,"herbivoro")==0){
        puts("vaca");
        //ACABA AQUI
      }

    }

  }else if(strcmp(palavra,"invertebrado")==0){
    puts("invertebrado");
    fgets(palavra, sizeof(palavra), stdin);
    palavra[strcspn(palavra, "\n")]='\0';

    if(strcmp(palavra,"inseto")==0){
      puts("inseto");     //PAREI AQUI
      fgets(palavra,sizeof(palavra),stdin);
      palavra[strcspn(palavra, "\n")]='\0';
    }

  }



  return 0;
}
