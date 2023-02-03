#include <iostream>

using namespace std;

int main()
{
   int N, loopl, loopc, soma;

   cout << "Qual a ordem da matriz? ";
   cin >> N;

   int mat[N][N];

   for (loopl = 0; loopl < N; loopl++) {
      for (loopc = 0; loopc < N; loopc++) {
         cout << "Elemento [" << loopl << "," << loopc << "]: ";
         cin >> mat[loopl][loopc];
      }
   }

   soma = 0;
   for (loopl = 0; loopl < N; loopl++) {
      for (loopc = loopl+1; loopc < N; loopc++) {
         soma = soma + mat[loopl][loopc];
      }
   }

   cout << "SOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = " << soma << endl;

    return 0;
}
