#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
   int N, indice, loopl, loopc;
   double soma;

   cout << "Qual a ordem da matriz? ";
   cin >> N;

   double mat[N][N];

   soma = 0;
   for (loopl = 0; loopl < N; loopl++) {
      for (loopc = 0; loopc < N; loopc++) {
         cout << "Elemento [" << loopl << "," << loopc << "]: ";
         cin >> mat[loopl][loopc];
         if (mat[loopl][loopc] > 0) {
            soma = soma + mat[loopl][loopc];
         }
      }
   }
   cout << endl;

   cout << fixed << setprecision (1);
   cout << "SOMA DOS POSITIVOS: " << soma << endl;
   cout << endl;

   cout << "Escolha uma linha: ";
   cin >> indice;

   cout << "LINHA ESCOLHIDA: ";
   for (loopl = indice; loopl == indice; loopl++) {
      for (loopc = 0; loopc < N; loopc++) {
         cout << mat[indice][loopc] << " ";
      }
   }
   cout << endl;

   cout << endl;
   cout << "Escolha uma coluna: ";
   cin >> indice;

   cout << "COLUNA ESCOLHIDA: ";
   for (loopl = 0; loopl < N; loopl++) {
      for (loopc = indice; loopc < N; loopc++) {
         cout << mat[loopl][indice] << " ";
      }
   }
   cout << endl;

   cout << endl;
   cout << "DIAGONAL PRINCIPAL: ";
   for (loopl = 0; loopl < N; loopl++) {
      cout << mat[loopl][loopl] << " ";
   }
   cout << endl;

   cout << endl;
   cout << "MATRIZ ALTERADA:" << endl;
   for (loopl = 0; loopl < N; loopl++) {
      for (loopc = 0; loopc < N; loopc++) {
         if (mat[loopl][loopc] < 0) {
            mat[loopl][loopc] = pow(mat[loopl][loopc], 2);
            cout << mat[loopl][loopc] << " ";
         }
         else {
            cout << mat[loopl][loopc] << " ";
         }
      }
      cout << endl;
   }

    return 0;
}
