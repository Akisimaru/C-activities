#include "iostream"
#include "cstdlib"
#include <math.h>
using namespace std;


double a,b,c,delta,x1,x2;
double *ptrA,*ptrB,*ptrC,*ptrD,*ptrX1,*ptrX2;

double lerX();
double calcular(double a2, double b2, double c2);
void exibir();
void menu_controle();



int main() {
  menu_controle();
  return 0;
}


double lerX(){
  cout << "\nDigite o valor de A: ";
  cin >> a;
  ptrA = &a;
  cout << "\nDigite o valor de B: ";
  cin >> b;
  ptrB = &b;
  cout << "\nDigite o valor de C: ";
  cin >> c;
  ptrC = &c;

  return 0;
}


double calcular(double a2, double b2, double c2){


  delta = (b2 * b2) - ( 4 * a2 * c2);
  ptrD = &delta;

  
  x1 = ((*ptrB * -1) + sqrt(*ptrD)) / (2 * *ptrA);
  ptrX1 = &x1;
  x1 = ((*ptrB * -1) - sqrt(*ptrD)) / (2 * *ptrA);
  ptrX2 = &x2;
  
  return 0;
}


void exibir(){

  cout << "\n\n" <<"Delta = " << *ptrD << "\n\n";
  cout << "X1 = " << ((*ptrB * -1) + sqrt(*ptrD)) / (2 * *ptrA) << "\n\n";
  cout << "X2 = " <<((*ptrB * -1) - sqrt(*ptrD)) / (2 * *ptrA) << "\n\n";
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
                
        case 2: calcular(*ptrA, *ptrB, *ptrC) ;
                break;

        case 3: exibir() ;
                break;

        case 4: exit(0); break;
    }    
    
    goto Menu;
}