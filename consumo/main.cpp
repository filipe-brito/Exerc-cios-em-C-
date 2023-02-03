#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   int distancia;
   double combustivel, consumoMedio;

   cout << "Distancia percorrida: ";
   cin >> distancia;

   cout << "Combustivel gasto: ";
   cin >> combustivel;

   consumoMedio = distancia / combustivel;

   cout << fixed << setprecision (3);
   cout << "Consumo medio = " << consumoMedio;

    return 0;
}
