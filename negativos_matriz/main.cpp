#include <iostream>

using namespace std;

int main()
{
   int m, n, loopl, loopc;

   cout << "Qual a quantidade de linhas da matriz? ";
   cin >> m;
   cout << "Qual a quantidade de colunas da matriz? ";
   cin >> n;

   int mat[m][n];

   for (loopl = 0; loopl < m; loopl++) {
      for (loopc = 0; loopc < n; loopc++) {
         cout << "Elemento [" << loopl << "," << loopc << "]: ";
         cin >> mat[loopl][loopc];
      }
   }

   cout << "VALORES NEGATIVOS:" << endl;
   for (loopl = 0; loopl < m; loopl++) {
      for (loopc = 0; loopc < n; loopc++) {
         if (mat[loopl][loopc] < 0) {
            cout << mat[loopl][loopc] << endl;
         }
      }
   }

    return 0;
}
