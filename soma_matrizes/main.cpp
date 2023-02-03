#include <iostream>

using namespace std;

int main()
{
   int m, n, loopl, loopc;

   cout << "Quantas linhas vai ter cada matriz? ";
   cin >> m;
   cout << "Quantas colunas vai ter cada matriz? ";
   cin >> n;

   int mata[m][n], matb[m][n], matc[m][n];

   cout << "Digite os valores da matriz A:" << endl;
   for (loopl = 0; loopl < m; loopl++) {
      for (loopc = 0; loopc < n; loopc++) {
         cout << "Elemento [" << loopl << "," << loopc << "]:";
         cin >> mata[loopl][loopc];
      }
   }

   cout << "Digite os valores da matriz B:" << endl;
   for (loopl = 0; loopl < m; loopl++) {
      for (loopc = 0; loopc < n; loopc++) {
         cout << "Elemento [" << loopl << "," << loopc << "]:";
         cin >> matb[loopl][loopc];
      }
   }

   cout << "MATRIZ SOMA:" << endl;
   for (loopl = 0; loopl < m; loopl++) {
      for (loopc = 0; loopc < n; loopc++) {
         matc[loopl][loopc] = mata[loopl][loopc] + matb[loopl][loopc];
         cout << matc[loopl][loopc] << " ";
      }
      cout << endl;
   }

    return 0;
}
