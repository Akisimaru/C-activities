#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;
int A,B,C, Delta;
float x1,x2;
int main() {
  setlocale(LC_ALL, "Portuguese");

  CALCULAR_BHASKARA:
  system("clear");

  cout << "\nDigite o valor de A (não pode ser 0): ";
  cin >> A;
  cout << "\nDigite o valor de B: ";
  cin >> B;
  cout << "\nDigite o valor de C: ";
  cin >> C;

  if( A != 0){
    Delta = B * B - 4 * A * C;

    if (Delta > 0){
      cout << (B * -1) << "+" << sqrt(Delta) << "/" << (2 * A) << "\n";
      x1 = (B * -1) + sqrt(Delta)/ 2 * A ;
      cout << (B * -1) << "-" << sqrt(Delta) << "/" << (2 * A) << "\n";
      x2 = (B * -1) - sqrt(Delta) / 2 * A;

      cout << A << ", " << B << ", "  << C << ", "  << Delta << ", " << x1 << ", " << x2 << "\n";
    }
    else{
      cout << A << ", " << B << ", "  << C << ", "  << Delta << "\n";
      cout << "Sem solução no conjunto dos números Reais";


    }
  }
  else{
    cout << "O valor de A não deve ser 0\n";
    system("sleep 5");
    goto CALCULAR_BHASKARA;

  }
  

  return 0;
}