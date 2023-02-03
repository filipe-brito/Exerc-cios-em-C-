#include <iostream>

using namespace std;

int main()
{
   int X, loop, soma;

   cout << "Digite um numero inteiro: ";
   cin >> X;

   while (X != 0) {
      soma = 0;
      loop = 1;
      while (loop <= 5) {
         if (X % 2 == 0) {
            soma = soma + X;
            loop = loop + 1;
            X = X + 1;
         }
         else {
            X = X + 1;
         }
      }
      cout << "SOMA = " << soma << endl;
      cout << "Digite um numero inteiro: ";
      cin >> X;
   }

    return 0;
}
