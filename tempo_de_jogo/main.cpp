#include <iostream>

using namespace std;

int main()
{
   int horai, horaf, duracao;

   cout << "Hora inicial: ";
   cin >> horai;

   cout << "Hora final: ";
   cin >> horaf;

   if (horai >= horaf) {
      duracao = 24 + horaf - horai;
   }
   else {
      duracao = horaf - horai;
   }

   cout << "O JOGO DUROU " << duracao << " HORA(S)";

    return 0;
}
