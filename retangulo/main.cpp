#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
   double base, altura, area, perimetro, diagonal;

   cout << "Base do retangulo: ";
   cin >> base;

   cout << "Altura do retangulo: ";
   cin >> altura;

   area = base * altura;
   perimetro = (base + altura) * 2;
   diagonal = sqrt(base * base + (altura * altura));

   cout << fixed << setprecision (4);
   cout << "AREA = " << area << endl;
   cout << "PERIMETRO = " << perimetro << endl;
   cout << "DIAGONAL = " << diagonal << endl;

    return 0;
}
