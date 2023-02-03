#include <iostream>

using namespace std;

int main()
{
   int x1, x2;

   cout << "Digite dois numeros inteiros: " << endl;
   cin >> x1;
   cin >> x2;

   if (x1 > x2) {
      if (x1 % x2 == 0) {
         cout << "Sao multiplos" << endl;
      }
      else {
        cout << "Nao sao multiplos" << endl;
      }
   }
   else {
      if (x2 % x1 == 0) {
         cout << "Sao multiplos" << endl;
      }
      else {
        cout << "Nao sao multiplos" << endl;
      }
   }

    return 0;
}
