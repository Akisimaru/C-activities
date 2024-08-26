#include "iostream"
#include "cstdlib"
#include <math.h>
using namespace std;


double raio,area,pi = 3.14;
double *ptrRaio,*ptrArea,*ptrPI = &pi;

double lerX();
double calcular();
void exibir();
void menu_controle();



int main() {
  menu_controle();
  return 0;
}


double lerX(){
  cout << "\nDigite o raio do círculo: ";
  cin >> raio;
  ptrRaio = &raio;

  return 0;
}


double calcular(){


  area = *ptrPI * (*ptrRaio * *ptrRaio);
  ptrArea = &area;
  
  return 0;
}


void exibir(){

  cout << "\n\n" <<"Raio = " << *ptrRaio<< "\n\n";
  cout << "Pi = " << *ptrPI << "\n\n";
  cout << "Area = " << *ptrArea << "\n\n";
  system ("sleep 5");

}


void menu_controle() 
{
    int op;
    
    Menu:  // ponto de repetição
    system("clear");
    cout << "\n*** Menu de Controle ***";
    cout << "\n1 Ler...";
    cout << "\n2 Calcular...";
    cout << "\n3 Exibir Resultados...";
    cout << "\n4 Finalizar...";
    cout << "\nitem:";
    cin >> op;
    
    switch ( op )
    {   case 1: lerX(); 
                break;
                
        case 2: calcular() ;
                break;

        case 3: exibir() ;
                break;

        case 4: exit(0); break;
    }    
    
    goto Menu;
}