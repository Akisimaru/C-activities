#include"iostream"
#include"cstdlib"
#include"math.h"
using namespace std;

// Declaração ou Resumo das Sub Rotinas
double LerCatetoAdjacente();
double LerCatetoOposto();
double calhipotenusa ( double ca, double co );
void mostrar ( double ca, double co, double hip );

// função de leitura
double LerCatetoAdjacente(){
  double ca;
  cout << "Digite o valor do cateto adjacente:";
  cin >> ca;
  return ca;

}
double LerCatetoOposto(){
  double co;
  cout << "Digite o valor do cateto oposto:";
  cin >> co;
  return co;

}
double calhipotenusa ( double ca, double co )   
{
  double hip;
  hip = sqrt(( pow(ca,2) + pow(co,2) ));
  return hip; 
}

// tipo void para mostrar o valores
void mostrar ( double ca, double co, double hip) 
{
  cout << "\nValor do cateto adjacente: " << ca;
  cout << "\nValor do cateto oposto: " << co;  
  cout << "\nValor da hipotenusa: " << hip;
  cout << "\n ";
}

int main()  {
  double ca,co,hip;
 
  system("clear");
  MENU:
    char tecla;
    cout<<"\nMenu\n1 Ler \n2 Calcular\n3 Exibir \n4 Sair \n";
    tecla = cin.get();
    cin.ignore();
    switch(tecla)  
      { 
        case '1': ca = LerCatetoAdjacente();
                  co = LerCatetoOposto();
              
               system ("sleep 5");
               system ("clear");
               goto MENU;
               
          break;
        case '2': hip = calhipotenusa(ca,co);
                  system ("clear");
                  goto MENU;
          break;  
        case '3':  mostrar( ca,co,hip);
                   system("sleep 5");
                   goto MENU;
          break;   
        case '4':  cout << "\nFim do programa!\n";                     system ("exit");
          break;    
      }
    
    return 0;
}    
