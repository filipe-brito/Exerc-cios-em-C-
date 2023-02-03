#include <iostream>

using namespace std;

int main()
{
   int N, loopl, loopc, maior;

   cout << "Qual a ordem da matriz? ";
   cin >> N;

   int mat[N][N];

   for (loopl = 0; loopl < N; loopl++) {
      for (loopc = 0; loopc < N; loopc++) {
         cout << "Elemento [" << loopl << "," << loopc << "]: ";
         cin >> mat[loopl][loopc];
      }
   }

   cout << "MAIOR ELEMENTO DE CADA LINHA:" << endl;
   for (loopl = 0; loopl < N; loopl++) {
        maior = 0;
      for (loopc = 0; loopc < N; loopc++) {
         if (maior < mat[loopl][loopc]) {
            maior = mat[loopl][loopc];
         }
      }
      cout << maior << endl;
   }

    return 0;
}
