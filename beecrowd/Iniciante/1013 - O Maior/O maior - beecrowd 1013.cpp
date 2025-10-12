<<<<<<< HEAD
#include <iostream>

int main(){
 int a, b, c, maiorAB, maior;
 std::cin >>a>>b>>c;
 maiorAB = (a+b+std::abs(a-b))/2;
 maior = (maiorAB+c+std::abs(maiorAB-c))/2;
 std::cout <<maior<< " eh o maior" << std::endl;

 return 0;
}

/*

 da internet

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int a, b, c, maiorAb, maior;
    cin >> a >> b >> c;
    maiorAb = (a+b+abs(a-b))/2;
    maior = (maiorAb+c+abs(maiorAb-c))/2;
    cout << maior << " eh o maior" << endl;

    return 0;
}*/
=======
#include <iostream>

int main(){
 int a, b, c, maiorAB, maior;
 std::cin >>a>>b>>c;
 maiorAB = (a+b+std::abs(a-b))/2; // abs() calcula o valor absoluto, estava na formula do site
 maior = (maiorAB+c+std::abs(maiorAB-c))/2;
 std::cout <<maior<< " eh o maior" << std::endl;

 return 0;
}

/*

 da internet

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int a, b, c, maiorAb, maior;
    cin >> a >> b >> c;
    maiorAb = (a+b+abs(a-b))/2;
    maior = (maiorAb+c+abs(maiorAb-c))/2;
    cout << maior << " eh o maior" << endl;

    return 0;
}*/
>>>>>>> b01f12f8218301bc1fe0df768944f48cc99d8143
