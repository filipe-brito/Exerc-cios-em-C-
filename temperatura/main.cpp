#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   char tipo;
   double C, F;

   cout << "Voce vai digitar a temperatura em qual escala (C/F)? ";
   cin >> tipo;

   if (tipo == 'F') {
      cout << "Digite a temperatura em Fahrenheit: ";
      cin >> F;

      C = (F - 32) * 5/9;

      cout << fixed << setprecision (2);
      cout << "Temperatura equivalente em Celsius: " << C << endl;
   }
   else {
      cout << "Digite a temperatura em Celsius: ";
      cin >> C;

      F = C * 1.8 + 32;

      cout << fixed << setprecision (2);
      cout << "Temperatura equivalente em Fahrenheit: " << F << endl;
   }

    return 0;
}
