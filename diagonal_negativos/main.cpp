#include <iostream>

using namespace std;

int main()
{
   int n, loopl, loopc, negativos;

   cout << "Qual a ordem da matriz? ";
   cin >> n;

   int mat[n][n];

   negativos = 0;
   for (loopl = 0; loopl < n; loopl++) {
      for (loopc = 0; loopc < n; loopc++) {
         cout << "Elemento [" << loopl << "," << loopc << "]: ";
         cin >> mat[loopl][loopc];
         if (mat[loopl][loopc] < 0) {
            negativos = negativos + 1;
         }
      }
   }

   cout << "DIAGONAL PRINCIPAL:" << endl;
   for (loopl = 0; loopl < n; loopl++) {
      cout << mat[loopl][loopl] << " ";
   }
   cout << endl;

   cout << "QUANTIDADE DE NEGATIVOS = " << negativos << endl;

    return 0;
}
