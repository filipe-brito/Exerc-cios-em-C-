#include <iostream>

using namespace std;

int main()
{
   int x, y, loop, impares;

   cout << "Digite dois numeros:" << endl;
   cin >> x;
   cin >> y;

   impares = 0;
   if (x > y) {
      for (loop = y+1; loop < x; loop++) {
         if (loop % 2 != 0) {
            impares = impares + loop;
         }
      }
   }
   else {
      for (loop = x; loop < y; loop++) {
         if (loop % 2 != 0) {
            impares = impares + loop;
         }
      }
   }

   cout << "SOMA DOS IMPARES = " << impares;

    return 0;
}
