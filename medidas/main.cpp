#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
   double A, B, C, areaq, areat, areatp;

   cout << "Digite a medida A: ";
   cin >> A;

   cout << "Digite a medida B: ";
   cin >> B;

   cout << "Digite a medida C: ";
   cin >> C;

   areaq = pow(A, 2);
   areat = B * A / 2;
   areatp = (A + B) / 2 * C;

   cout << fixed << setprecision (4);
   cout << "AREA DO QUADRADO = " << areaq << endl;
   cout << "AREA DO TRIANGULO = " << areat << endl;
   cout << "AREA DO TRAPEZIO = " << areatp << endl;

    return 0;
}
