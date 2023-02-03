#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   int m, n, loopl, loopc, soma;

   cout << "Qual a quantidade de linhas da matriz? ";
   cin >> m;

   cout << "Qual a quantidade de colunas da matriz? ";
   cin >> n;

   double mat[m][n];
   double vets[m];

   for (loopl = 0; loopl < m; loopl++) {
      cout << "Digite os elementos da " << loopl+1 << "a. linha:" << endl;
      for (loopc = 0; loopc < n; loopc++) {
        cin >> mat[loopl][loopc];
      }
   }

   soma = 0;
   for (loopl = 0; loopl < m; loopl++) {
      soma = 0;
      for (loopc = 0; loopc < n; loopc++) {
         soma = soma + mat[loopl][loopc];
      }
      vets[loopl] = soma;
   }

   cout << fixed << setprecision (1);
   cout << "VETOR GERADO:" << endl;
   for (loopl = 0; loopl < m; loopl++) {
      cout << vets[loopl] << endl;
   }

    return 0;
}
