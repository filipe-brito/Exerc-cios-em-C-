#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   double largura, comprimento, valor, area;

   cout << "Digite a largura do terreno: ";
   cin >> largura;

   cout << "Digite o comprimento do metro quadrado: ";
   cin >> comprimento;

   cout << "Digite o valor do metro quadrado: ";
   cin >> valor;

   area = largura * comprimento;
   valor = valor * area;

   cout << fixed << setprecision (2);
   cout << "Area do terreno = " << area << endl;
   cout << "Preco do terreno = " << valor << endl;

    return 0;
}
