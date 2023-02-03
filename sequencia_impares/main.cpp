#include <iostream>

using namespace std;

int main()
{
   int X, loop;

   cout << "Digite o valor de X: ";
   cin >> X;

   for (loop = 1; loop <= X; loop++) {
      if (loop % 2 != 0) {
         cout << loop << endl;
      }
   }

    return 0;
}
