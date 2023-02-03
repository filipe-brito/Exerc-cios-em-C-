#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   int n, loop, quantidade, c, r, s, total;
   double pc, pr, ps;
   char tipo;

   cout << "Quantos casos de teste serao digitados? ";
   cin >> n;

   c = 0;
   s = 0;
   r = 0;
   total = 0;
   for (loop = 1; loop <= n; loop++) {
      cout << "Quantidade de cobaias: ";
      cin >> quantidade;
      cout << "Tipo de cobaia: ";
      cin >> tipo;

      total = total + quantidade;
      if (tipo == 'C') {
         c = c + quantidade;
      }
      else if (tipo == 'R') {
         r = r + quantidade;
      }
      else {
         s = s + quantidade;
      }
   }

   pc = c;
   pr = r;
   ps = s;

   pc = pc * 100 / total;
   pr = pr * 100 / total;
   ps = ps * 100 / total;

   cout << fixed << setprecision (2);
   cout << endl;
   cout << "RELATORIO FINAL:" << endl;
   cout << "Total: " << total << " cobaias" << endl;
   cout << "Total de coelhos: " << c << endl;
   cout << "Total de ratos: " << r << endl;
   cout << "Total de sapos: " << s << endl;
   cout << "Percentual de coelhos: " << pc << endl;
   cout << "Percentual de ratos: " << pr << endl;
   cout << "Percentual de sapos: " << ps << endl;

    return 0;
}
