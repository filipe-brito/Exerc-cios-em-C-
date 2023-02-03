#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   double x1, x2, nf;

   cout << "Digite a primeira nota: ";
   cin >> x1;

   cout << "Digite a segunda nota: ";
   cin >> x2;

   nf = x1 + x2;

   if (nf < 60) {
      cout << fixed << setprecision (1);
      cout << "NOTA FINAL = " << nf << endl;
      cout << "REPROVADO" << endl;
   }
   else {
      cout << fixed << setprecision (1);
      cout << "NOTA FINAL = " << nf << endl;
   }

    return 0;
}
