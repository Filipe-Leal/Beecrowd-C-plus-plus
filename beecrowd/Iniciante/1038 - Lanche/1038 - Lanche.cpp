#include <iostream>
#include <iomanip>

int main(){
   char codigo;
   int quantidade=0;
   double valor=0;

   std::cout << std::setprecision(2) << std::fixed;

   std::cin >> codigo >> quantidade;

   switch (codigo){
    case '1':
      valor = 4*quantidade;
      std::cout << "Total: R$ " << valor << std::endl;
      break;

    case '2':
      valor = 4.50*quantidade;
      std::cout << "Total: R$ " << valor << std::endl;
      break;

    case '3':
      valor = 5*quantidade;
      std::cout << "Total: R$ " << valor << std::endl;
      break;

    case '4':
      valor = 2*quantidade;
      std::cout << "Total: R$ " << valor << std::endl;
      break;

    case '5':
      valor = 1.50*quantidade;
      std::cout << "Total: R$ " << valor << std::endl;
      break;


    default:
      break;
   }



  return 0;
}
