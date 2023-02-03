#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   int n, loop;
   double x1, x2, x3, media;

   cout << "Quantos casos voce vai digitar? ";
   cin >> n;

   for (loop = 1; loop <= n; loop++) {
      cout << "Digite tres numeros: " << endl;
      media = 0;
      cin >> x1;
      cin >> x2;
      cin >> x3;
      media = x1 * 2 + x2 * 3 + x3 * 5;
      media = media / 10;
      cout << fixed << setprecision (1);
      cout << "MEDIA = " << media << endl;
   }

    return 0;
}
