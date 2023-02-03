#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   double preco, valor, troco;
   int quantidade;

   cout << "Preco unitario do produto: ";
   cin >> preco;
   cout << "Quantidade comprada: ";
   cin >> quantidade;
   cout << "Dinheiro recebido: ";
   cin >> valor;

   preco = preco * quantidade;
   troco = valor - preco;

   cout << fixed << setprecision (2);
   cout << "TROCO = " << troco;

    return 0;
}
