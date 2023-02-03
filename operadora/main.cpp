#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   int minutos;
   double valor;

   cout << "Digite a quantidade de minutos: ";
   cin >> minutos;

   if (minutos > 100) {
      valor = (minutos - 100) * 2;
      cout << fixed << setprecision (2);
      cout << "Valor a pagar: R$ " << valor+50 << endl;
   }
   else {
      cout << "Valor a pagar R$ 50.00" << endl;
   }

    return 0;
}
