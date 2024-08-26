#include <iostream>
#include <cstdlib>
#include <math.h>
#include <string.h>

using namespace std;

 int linha = -1;               
int const n = 2; 
typedef struct Pessoa tab;

struct  Pessoa  
{ 
  string nome [n];
  int    idade [n];
  string sexo [n];
  double salario [n];
  double salarioNovo[n];
};

tab    tb; 




  int lerIdade ( );
  string lerSexo ( );
  string lerNome ( );
  double lerSalario ( );
  double NovoSalario ( double * salario ); // aumento de 10% sobre o salário
  void menu();
  void novaLinha();
  void exibir();


 


int main () 
{
  

    menu ();
    return 0;
}

 


void menu() 
{
    int op;
    double valor;
    
    MENU:
        system("clear");
        cout << "\n** MENU DE CONTROLE **";
        cout << "\n1 Criar novo registro";
        cout << "\n2 Exibir";
        cout << "\n3 Finalizar programa";
        cout << "\nItem:";
        cin >> op;
    
        switch ( op )
        {
            case 1: novaLinha(); break;
            
            
            case 2: exibir(); break;
            
            
            case 3: exit(0); break;
        }
        goto MENU;
    
}

 

void novaLinha() 
{  
    Pessoa *ptrPessoa;
    ptrPessoa = &tb;
    string nome, sexo;
    int idade;
    double salario,novosalario;

    linha ++;  

    nome = lerNome();
    idade = lerIdade();
    sexo = lerSexo();
    salario = lerSalario();
    novosalario = NovoSalario( &salario );

    (*ptrPessoa).nome [ linha ] = nome;
    (*ptrPessoa).idade  [ linha ] = idade;
    (*ptrPessoa).sexo  [ linha ] = sexo;
    (*ptrPessoa).salario  [ linha ] = salario;
    (*ptrPessoa).salarioNovo  [ linha ] = novosalario;
    
  
   
 }

string lerNome() 
{
    string n;
    cin.ignore();
    cout << "\nDigite o Nome:";
    getline(cin, n ) ; 
    return 0; 
}
int LerIdade() 
{
    int n;
    cout << "Digite a Idade:";
    cin >> n;
    return 0; 
}

string lerSexo() 
{
    string n;
    cin.ignore();
    cout << "\nDigite o Sexo (m/f) :";
    getline(cin, n ) ; 
    return 0; 
}

double lerSalario() 
{
    double n;
    cout << "Digite o salário:";
    cin >> n;
    return 0; 
}

double NovoSalario( double * salario ) 
{
    double aumento,NovoSalario;
    aumento = *salario * 0.1;
    NovoSalario = *salario + aumento;
    return NovoSalario; 
}





 

void exibir() {
    Pessoa *ptrPessoa;
    ptrPessoa = &tb;
    for (int i=0; i<=linha; i++)
        
    {
        cout << "\n"  << (*ptrPessoa).nome [ linha ] << " | " <<
    (*ptrPessoa).idade  [ linha ] << " | " <<
    (*ptrPessoa).sexo  [ linha ] << " | " <<
    (*ptrPessoa).salario  [ linha ] << " | " <<
    (*ptrPessoa).salarioNovo  [ linha ]<< endl;
    }
    
    system("sleep 5");
}

 

