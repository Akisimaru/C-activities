#include<iostream>
#include<math.h>
#include<cstdlib>
#include<iomanip>
using namespace std;
int n1,n2,n3,n4,n5,maior,menor;
char tecla;
int main() {
  setlocale(LC_ALL, "Portuguese");

  MENU_LER:
  system("clear");

  cout << "\n 1 - Ler divisiveis por 4 \n 2 - Ler maior e menor \n 3 - Sair \n";
  tecla = cin.get();
  cin.ignore();

  switch(tecla){
    case '1':
            cout << "\nDigite o primeiro valor: ";
            cin >> n1;
            cout << "\nDigite o segundo valor: ";
            cin >> n2;
            cout << "\nDigite o terceiro valor: ";
            cin >> n3;
            cout << "\nDigite o quarto valor: ";
            cin >> n4;
  
            if(n1 % 2 == 0 and n1 % 3 == 0){
              cout << n1 << " ";
            }
            if(n2 % 2 == 0 and n2 % 3 == 0){
              cout << n2 << " ";
            }
            if(n3 % 2 == 0 and n3 % 3 == 0){
              cout << n3 << " ";
            }
            if(n4 % 2 == 0 and n4 % 3 == 0){
              cout << n4 << " \n";
              system("sleep 5");
            }


            
            goto MENU_LER;
      break;
    case '2': 
            cout << "\nDigite o primeiro valor: ";
            cin >> n1;
            cout << "\nDigite o segundo valor: ";
            cin >> n2;
            cout << "\nDigite o terceiro valor: ";
            cin >> n3;
            cout << "\nDigite o quarto valor: ";
            cin >> n4;
            cout << "\nDigite o quinto valor: ";
            cin >> n5;
    
            if (n1 > n2 and n1 > n3 and n1 > n4 and n1 > n5){
              maior = n1;
            }
            else if(n1 < n2 and n1 < n3 and n1 < n4 and n1 < n5){
              menor = n1;
            }
            if (n2 > n1 and n2 > n3 and n2 > n4 and n2 > n5){
              maior = n2;
            }
            else if(n2 < n1 and n2 < n3 and n2 < n4 and n2 < n5){
              menor = n2;
            }
            if (n3 > n2 and n3 > n1 and n3 > n4 and n3 > n5){
              maior = n3;
            }
            else if(n3 < n2 and n3 < n1 and n3 < n4 and n3 < n5){
              menor = n3;
            }
            if (n4 > n2 and n4 > n3 and n4 > n1 and n4 > n5){
              maior = n4;
            }
            else if(n4 < n2 and n4 < n3 and n4 < n1 and n4 < n5){
              menor = n4;
            }
            if (n5 > n2 and n5 > n3 and n5 > n4 and n5 > n1){
              maior = n5;
            }
            else if(n5 < n2 and n5 < n3 and n5 < n4 and n5 < n1){
              menor = n5;
            }


            cout << "Maior: " << maior << "\n" << "Menor: " << menor << "\n";
            system("sleep 5");
            goto MENU_LER;
      break;
    case '3': system("exit");

  }

  

  return 0;
}