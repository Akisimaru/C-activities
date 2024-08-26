#include"iostream"
#include"cstdlib"
#include<math.h>
using namespace std;

void exibir();

double cal_multabase() ;
double cal_juros();

double cal_multabase(double valorprincipal) {
 double multa;

 multa = valorprincipal * 0.02;

  return multa;
}
double cal_juros(int dias, double valorprincipal){
  double juros;
  double meses = 0;

  if (dias >= 30){
    meses = round(dias / 30);
  }
  
  juros = valorprincipal * (meses / 100);


  return juros;
}



int main ( ) 
{
  double valorprincipal[5], valorpagar[5], multabase[5], juros[5];
  int dias[5];

  int tecla = 0;
  while (tecla != 4) {
        system("clear");   
        cout << "\nmenu\n1 Ler\n2 Calcular\n3 Exibir\n4 Sair\nItem:";                        
        cin >> tecla;
        if (tecla == 1 )  {
            int i = 0;
            while (i < 5){
              cout << "Digite o valor principal:";
              cin >> valorprincipal[i];
              cout << "Digite a quantidade de dias:";
              cin >> dias[i];
              i = i + 1;
              cout << "\n ";   
            }
          }
        else if (tecla ==2 ) 
        {
          int i = 0;
            while (i < 5){
              multabase[i] = cal_multabase(valorprincipal[i]);
              juros[i] = cal_juros(dias[i],valorprincipal[i]);
              valorpagar[i] = (valorprincipal[i] + multabase[i] + juros[i]);
              i = i + 1; 
            }
           
           cout << "\nCálculo bem sucedido!"; 
           cout << "\n ";   
           system("sleep 5"); 
        }else if (tecla ==3 ) {
            int i = 0; 
            while (i < 5){
              cout << "R$" << valorprincipal[i] << " | ";
              cout << dias[i]  << " dias | ";
              cout << "R$" << multabase[i]  << " de multa | ";
              cout << "R$" << juros[i]  << " de juros | ";
              cout << "Total : R$" << valorpagar[i] << "  | ";
              i = i + 1;

              cout << "\n ";   

            }
            cout << "\n ";   
            system("sleep 5");
            }
            
        }
           
           // fim while
        
         cout << "\nPrograma finalizado!\n";
        system("sleep 5"); return 0; }