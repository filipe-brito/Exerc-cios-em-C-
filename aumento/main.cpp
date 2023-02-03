#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   double salario, novoSalario, aumento;
   int porcentagem;

   cout << "Digite o salario da pessoa: ";
   cin >> salario;

   if (salario <= 1000) {
      aumento = salario / 100 * 20;
      novoSalario = salario + aumento;
      porcentagem = 20;
   }
   else if (salario <= 3000) {
      aumento = salario / 100 * 15;
      novoSalario = salario + aumento;
      porcentagem = 15;
   }
   else if (salario <= 8000) {
      aumento = salario / 100 * 10;
      novoSalario = salario + aumento;
      porcentagem = 10;
   }
   else {
      aumento = salario / 100 * 5;
      novoSalario = salario + aumento;
      porcentagem = 5;
   }

   cout << fixed << setprecision (2);
   cout << "Novo salario = R$ " << novoSalario << endl;
   cout << "Aumento = R$ " << aumento << endl;
   cout << "Porcentagem = " << porcentagem << " %";

    return 0;
}
