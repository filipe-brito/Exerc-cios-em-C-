#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   double x1, x2, media;

   cout << "Digite a primeira nota: ";
   cin >> x1;

   while (x1 < 0 || x1 > 10) {
      cout << "Valor invalido! Tente novamente: ";
      cin >> x1;
   }

   cout << "Digite a segunda nota: ";
   cin >> x2;

   while (x2 < 0 || x2 > 10) {
      cout << "Valor invalido! Tente novamente: ";
      cin >> x2;
   }

   media = (x1 + x2) / 2;

   cout << fixed << setprecision (2);
   cout << "MEDIA = " << media;

    return 0;
}
