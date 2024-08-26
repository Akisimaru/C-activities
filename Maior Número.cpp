#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;
int A,B,C,maior;
int main() {
  setlocale(LC_ALL, "Portuguese");

  MENU_LER:
  system("clear");

  cout << "\nDigite o primeiro valor: ";
  cin >> A;
  cout << "\nDigite o segundo valor: ";
  cin >> B;
  cout << "\nDigite o terceiro valor: ";
  cin >> C;

  if (A > B and A > C){
    maior = A;
  cout << "\nO maior número é: " << maior << "\n";  
  }
  else if(B > A and B > C){
    maior = B; 
  cout << "\nO maior número é: " << maior << "\n";
  }
  else if(C > A and C > B){
    maior = C;  
  cout << "\nO maior número é: " << maior << "\n";  
  }
    else {
    cout << "\nError: Os três números são iguais";
    cout << "\n" << A << ", " << B << ", " << C << "\n";
  }
  

  return 0;
}