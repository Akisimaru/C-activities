#include <iostream>
#include <cstdlib>
#include <math.h>
#include <string.h>
#include <string>
using namespace std;
int n1, n2, n3, n4;

int main() {
  setlocale(LC_ALL, "Portuguese");

  MENU_LER:
  system("clear");

  cout << "\nDigite o primeiro valor: ";
  cin >> n1;
  cout << "\nDigite o segundo valor: ";
  cin >> n2;
  cout << "\nDigite o terceiro valor: ";
  cin >> n3;
  cout << "\nDigite o quarto valor: ";
  cin >> n4;
  if (n1 < n2 and n1 < n3 and n1 < n4){
    cout << n1 << " ";
    if(n2 < n3 and n2 < n4){
      cout << n2 << " ";
      if (n3 < n4){
        cout << n3 << " ";
        cout << n4 << "\n";
      }
      else{
        cout << n4 << " ";
        cout << n3 << "\n";
      }
    }
    else if (n3 < n2 and n3 < n4){
      cout << n3 << " ";
      if (n2 < n4){
        cout << n2 << " ";
        cout << n4 << "\n";
      }
      else{
        cout << n4 << " ";
        cout << n2 << "\n";
      }
    }
    else{
      cout << n4 << " ";
      if (n2 < n3){
        cout << n2 << " ";
        cout << n3 << "\n";
      }
      else{
        cout << n3 << " ";
        cout << n2 << "\n";
      }
    }
    }
  else if(n2 < n1 and n2 < n3 and n2 < n4){
    cout << n2 << " ";
    if(n1 < n3 and n1 < n4){
      cout << n1 << " ";
      if (n3 < n4){
        cout << n3 << " ";
        cout << n4 << "\n";
      }
      else{
        cout << n4 << " ";
        cout << n3 << "\n";
      }
    }
    else if (n3 < n1 and n3 < n4){
      cout << n3 << " ";
      if (n1 < n4){
        cout << n1 << " ";
        cout << n4 << "\n";
      }
      else{
        cout << n4 << " ";
        cout << n1 << "\n";
      }
    }
    else{
      cout << n4 << " ";
      if (n1 < n3){
        cout << n1 << " ";
        cout << n3 << "\n";
      }
      else{
        cout << n3 << " ";
        cout << n1 << "\n";
      }
    }
    }
  else if(n3 < n1 and n3 < n2 and n3 < n4){
    cout << n3 << " ";
    if(n1 < n2 and n1 < n4){
      cout << n1 << " ";
      if (n2 < n4){
        cout << n2 << " ";
        cout << n4 << "\n";
      }
      else{
        cout << n4 << " ";
        cout << n2 << "\n";
      }
    }
    else if (n2 < n1 and n2 < n4){
      cout << n2 << " ";
      if (n1 < n4){
        cout << n1 << " ";
        cout << n4 << "\n";
      }
      else{
        cout << n4 << " ";
        cout << n1 << "\n";
      }
    }
    else{
      cout << n4 << " ";
      if (n1 < n2){
        cout << n1 << " ";
        cout << n2 << "\n";
      }
      else{
        cout << n2 << " ";
        cout << n1 << "\n";
      }
    }
    }
  else if(n4 < n1 and n4 < n3 and n4 < n2){
    cout << n4 << " ";
    if(n1 < n3 and n1 < n2){
      cout << n1 << " ";
      if (n3 < n2){
        cout << n3 << " ";
        cout << n2 << "\n";
      }
      else{
        cout << n2 << " ";
        cout << n3 << "\n";
      }
    }
    else if (n3 < n1 and n3 < n2){
      cout << n3 << " ";
      if (n1 < n2){
        cout << n1 << " ";
        cout << n2 << "\n";
      }
      else{
        cout << n2 << " ";
        cout << n1 << "\n";
      }
    }
    else{
      cout << n2 << " ";
      if (n1 < n3){
        cout << n1 << " ";
        cout << n3 << "\n";
      }
      else{
        cout << n3 << " ";
        cout << n1 << "\n";
      }
    }
    }

  return 0;
}