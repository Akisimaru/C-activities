#include"iostream"
#include"cstdlib"
#include"cmath"
using namespace std;

const double pi = 3.14;

// Declaração ou Resumo das Sub Rotinas
double LerCircunferencia();
double caldiametro ( double circunferencia );
double calraio ( double diametro );
double calarea ( double raio );
void mostrar ( double diametro, double raio, double area );

// função de leitura
double LerCircunferencia(){
  double circunferencia;
  cout << "Digite o valor da circunferencia:";
  cin >> circunferencia;
  return circunferencia;

}
double caldiametro ( double circunferencia )   
{  
  double diametro;
  diametro = circunferencia / pi;
  return diametro; 
}
double calraio ( double diametro )   
{
  double raio;
  raio = diametro / 2;
  return raio; 
}
double calarea ( double raio )   
{
  double area;
  area = pi * sqrt(raio);
  return area; 
}

// tipo void para mostrar o valores
void mostrar ( double diametro, double raio, double area) 
{
  cout << "\nValor do diametro: " << diametro;
  cout << "\nValor do raio: " << raio;  
  cout << "\nValor da area: " << area;
  cout << "\n ";
}

int main()  {
  double vdiametro , vraio, varea, vcircun;
  char tecla;
  system("clear");
  MENU:
    
    cout<<"\nMenu\n1 Executar\n2 Sair\n";
    tecla = cin.get();
    cin.ignore();
    switch(tecla)  
      { 
        case '1': vcircun = LerCircunferencia();
               vdiametro = caldiametro ( vcircun );
               vraio = calraio( vdiametro );
               varea = calarea( vraio );
               mostrar( vdiametro, vraio, varea);
               system ("sleep 5");
               system ("clear");
               goto MENU;
               
        break;
        case '2':  cout << "\nFim do programa!\n";                     system ("exit");
        break;   
      }
    
    return 0;
}    
