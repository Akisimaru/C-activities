#include <iostream>
#include <cstdlib>
#include <math.h>
#include <string.h>
#include <string>
using namespace std;
float Altura, Peso, IMC;
string Nome,opcao;
int main() {
  setlocale(LC_ALL, "Portuguese");

  MENU_LER:
  system("clear");

  cout << "\nDigite sua altura: ";
  cin >> Altura;

  if (Altura <= 0){
    cout << "\nAltura Inválida";
    system("sleep 5");
    goto MENU_LER;
  }

  cout << "\nDigite seu peso: ";
  cin >> Peso;
  if (Peso <= 0){
    cout << "\nPeso Inválido";
    system("sleep 5");
    goto MENU_LER;
  }


  cin.ignore();
  cout << "\nDigite seu nome: ";
  getline(cin,Nome);

  IMC = Peso / pow(Altura, 2);
  system("clear");
  cout << "\nRelatório de saída"; 
  cout << "\n\tNome: " << Nome; 
  cout << "\n\tPeso: " << Peso; 
  cout << "\n\tAltura: " << Altura << endl;

  if (IMC <= 18.5){
      cout << "\nSeu peso está abaixo da média";
  }
  else if (IMC <= 25){
      cout << "\nSeu peso está na média";
  }
  else{
      cout << "\nSeu peso está acima da média";
  }
  system("sleep 5");

  cout << "\nDeseja repetir? (y/n)\n";
  getline(cin,opcao);

  if(opcao == "y"){
    goto MENU_LER;
  }

  else{
    system("exit");
  }


  return 0;
}