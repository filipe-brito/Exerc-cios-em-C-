#include <iostream>

using namespace std;

int main()
{
   int N, loop, fatorial;

   cout << "Digite o valor de N: ";
   cin >> N;

   if (N == 0) {
      fatorial = 1;
   }
   else {
      fatorial = N;
      for (loop = N-1; loop >= 1; loop--) {
         fatorial = fatorial * loop;
      }
   }

   cout << "FATORIAL = " << fatorial << endl;

    return 0;
}
