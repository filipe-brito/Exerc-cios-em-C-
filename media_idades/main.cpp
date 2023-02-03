#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   int idades, somai;
   double media;

   cout << "Digite as idades:" << endl;
   cin >> idades;

   media = 0;
   somai = 0;
   if (idades < 0) {
      cout << "IMPOSSIVEL CALCULAR" << endl;
   }
   else {
      while (idades > 0) {
         somai = somai + idades;
         media = media + 1;
         cin >> idades;
         }
      media = (double)somai / media;
      cout << fixed << setprecision (2);
      cout << "MEDIA = " << media << endl;
   }


    return 0;
}
