#include <iostream>
#include <cstdlib>
#include <math.h>
#include <string.h>
#include <string>
using namespace std;
int A,B,C,maior,meio,menor;
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
    if(B > C){
      meio = B;
      menor = C;
    }
    else{
      meio = C;
      menor = B;
    }
  cout << "\n" << menor << ", " << meio << ", " << maior << "\n";  
  }
  else if(B > A and B > C){
    maior = B; 
    if(A > C){
      meio = A;
      menor = C;
    }
    else{
      meio = C;
      menor = A;
    }
  cout << "\n" << menor << ", " << meio << ", " << maior << "\n";
  }
  else if(C > A and C > B){
    maior = C;  
    if(B > A){
      meio = B;
      menor = A;
    }
    else{
      meio = A;
      menor = B;
    }
  cout << "\n" << menor << ", " << meio << ", " << maior << "\n";  
  }
    else {
    cout << "\nError: Os três números são iguais";
    cout << "\n" << A << ", " << B << ", " << C << "\n";
  }
  

  return 0;
}