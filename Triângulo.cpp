#include <iostream>
#include <cstdlib>
#include <math.h>
#include <string.h>
#include <string>
using namespace std;
int A,B,C;
int main() {
  setlocale(LC_ALL, "Portuguese");

  MENU_LER:
  system("clear");

  cout << "\nDigite o valor do primeiro lado: ";
  cin >> A;
  cout << "\nDigite o valor do segundo lado: ";
  cin >> B;
  cout << "\nDigite o valor do terceiro lado: ";
  cin >> C;

  if( A >= (B+ C) or B >=(A+C) or C >= (B+A)){
    cout << "Este não é um triângulo, é só uma imagem de três lados";
  }
  else{
    if (A == B and B == C){
      cout << "Este é um triângulo equilátero";  
    }
    else if(A == B or A == C or B == C){
      cout << "Este é um triângulo isóceles";
    }
    else if(A != B and B != C and C != A){
      cout << "Este é um triângulo escaleno";
    }

  }
  

  return 0;
}