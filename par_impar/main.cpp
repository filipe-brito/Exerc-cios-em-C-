#include <iostream>

using namespace std;

int main()
{
   int N, X, loop, par, impar;

   cout << "Quantos numeros voce vai digitar? ";
   cin >> N;

   for (loop = 1; loop <= N; loop++) {
      cout << "Digite um numero: ";
      cin >> X;
      if (X % 2 == 0 && X > 0) {
         cout << "PAR POSITIVO" << endl;
      }
      else if (X % 2 == 0 && X < 0) {
         cout << "PAR NEGATIVO" << endl;
      }
      else if (X % 2 != 0 && X > 0) {
         cout << "IMPAR POSITIVO" << endl;
      }
      else if (X % 2 != 0 && X < 0) {
         cout << "IMPAR NEGATIVO" << endl;
      }
      else {
        cout << "NULO" << endl;
      }
   }

    return 0;
}
