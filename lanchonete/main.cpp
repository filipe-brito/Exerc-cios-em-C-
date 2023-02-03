#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   int codigo, quantidade;
   double valor;

   cout << "Codigo do produto comprado: ";
   cin >> codigo;

   cout << "Quantidade comprada: ";
   cin >> quantidade;

   if (codigo == 1) {
      valor = 5.00 * quantidade;
   }
   else if (codigo == 2) {
      valor = 3.50 * quantidade;
   }
   else if (codigo == 3) {
      valor = 4.80 * quantidade;
   }
   else if (codigo == 4) {
      valor = 8.90 * quantidade;
   }
   else {
      valor = 7.32 * quantidade;
   }

   cout << fixed << setprecision (2);
   cout << "Valor a pagar: R$ " << valor << endl;

    return 0;
}
