#include <iostream>

using namespace std;

int main()
{
   int N, X, loop, fora, dentro;

   cout << "Quantos numeros voce vai digitar? ";
   cin >> N;

   dentro = 0;
   fora = 0;
   for (loop = 1; loop <= N; loop++) {
      cout << "Digite um numero: ";
      cin >> X;
      if (X >= 10 && X <= 20) {
         dentro = dentro + 1;
      }
   }


   cout << dentro << " DENTRO" << endl;
   fora = N - dentro;
   cout << fora << " FORA" << endl;

    return 0;
}
