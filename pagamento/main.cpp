#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
   string nome;
   double valorh, pagamento;
   int quantidade;

   cout << "Nome: ";
   getline(cin, nome);

   cout << "Valor por hora: ";
   cin >> valorh;

   cout << "Horas trabalhadas: ";
   cin >> quantidade;

   pagamento = valorh * quantidade;

   cout << fixed << setprecision (2);
   cout << "O pagamento para " << nome << " deve ser " << pagamento;


    return 0;
}
