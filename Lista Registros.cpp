#include <iostream>
#include <string.h>
#include <cstdlib>

 

using namespace std;

int linha = -1;        
int cont  =  0;         
int const n = 5; 
typedef struct MyReg tab; 

 

struct  MyReg  // definindo o nome do struct
{ 
  string    nome [n];
  int    idade [n];
};

 

tab    tb;   // criando a tabela tb 
MyReg a1;
MyReg *ptrMyReg = &a1;

 

// sub rotinas de leitura
   string lerNome();   
   int  lerIdade();
   void novaLinha (); 
   void listar();  
   void menu_controle();
   void bolhaNome();
   void bolhaIdade();
   int buscaBinaria( string nome );
 
int main () 
{
   menu_controle();
   return 0;
}

 


string lerNome() 
{   string n;
    
    cin.ignore();
    cout << "\nDigite o Nome:";
    getline(cin, n ) ; 
    return n;  
}
 

int lerIdade()
{  
  
   double X; 
    
    cout << "\nDigite a Idade:";
    cin >> X;   
    return X; 
}

 

void novaLinha() 
{   //  variáveis auxiliares 

    string nom;
    int lock = 1;
    int idade;
    linha ++;  // adiciona número da nova linha
    cont  ++;  // faz contagem de registros 
    
    nom = lerNome();
    idade = lerIdade();

    


    // inserir dados lidos no struct
    tb.nome  [ linha ] = nom;
    tb.idade [ linha ] = idade;

    
   
 }

 


void listar() 
{   system("clear");
    
    cout << "\n ** Tela de Saída **";
  
    for ( int i = 0; i <= linha ;  i++ ) 
    {
        cout << "\n" << tb.nome[i] << " | "
         << tb.idade[i];
         


    }
    

    cout << "\n";
    system("sleep 4");  // pausa de 4 segundos
}

 
void bolhaNome () 
{   string aux;
    int aux2;
    for ( int i =0; i<=linha-1; i++) 
    {
        for (int j=i; j<=linha; j++ ) 
        {
            if (tb.nome[i] > tb.nome[j])
            {
                aux = tb.nome[i];
                tb.nome[i] = tb.nome[j];
                tb.nome[j] = aux;

                aux2 = tb.idade[i];
                tb.idade[i] = tb.idade[j];
                tb.idade[j] = aux2;
            }
        }
    }
}
void bolhaIdade () 
{   int aux;
    string aux2;
    for ( int i =0; i<=linha-1; i++) 
    {
        for (int j=i; j<=linha; j++ ) 
        {
            if (tb.idade[i] > tb.idade[j])
            {
                aux = tb.idade[i];
                tb.idade[i] = tb.idade[j];
                tb.idade[j] = aux;

                aux2 = tb.nome[i];
                tb.nome[i] = tb.nome[j];
                tb.nome[j] = aux2;
            }
        }
    }
}


int buscaSeq ( )
{
    int idade,qtd = 0;
    cout << "\nDigite a Idade:";
    cin >> idade;   


    for ( int i = 0; i <= linha;  i++)
    {

            if ( idade == tb.idade[i] ){
              cout << "Idade encontrada na posição " << i << "\n";
              qtd++;
            }
            }
    
    if (qtd == 0){
      cout << "Idade não encontrada na lista";
    }
    system ("sleep 3");
    return 0;
}
int buscaBinaria ( string nome ) {
  setlocale(LC_ALL,"Portuguese");
  int meio, esquerda = 0, direita = linha;
  
  for ( int i = esquerda; i <= direita; i++)
    { 
      meio = esquerda + direita / 2;
      cout << " ";
      
      if ( nome == tb.nome [meio])
      {       
        return meio;
      }

      else{
        if ( nome > tb.nome[ meio ] ){
          esquerda = meio ;

        }
        else{
            direita = meio ;
        }
      }

  }
  system ("sleep 3");
  return -1; 
  }

  
void menu_controle() 
{
    int op, encontrou = -1;
    string nome;

    Menu:  // ponto de repetição
    system("clear");
    cout << "\n*** Menu de Controle ***";
    cout << "\n1 Novo Registro...";
    cout << "\n2 Lista registro...";
    cout << "\n3 Classificar por nome..";
    cout << "\n4 Classificar por idade...";
    cout << "\n5 Busca sequencial (idade)...";
    cout << "\n6 Busca binária (nome)...";
    cout << "\n7 Finalizar...";
    cout << "endereço: " << ptrMyReg;
    cout << "\nitem:";
    cin >> op;
    
    switch ( op )
    {   case 1: novaLinha(); 
                break;
                
        case 2: listar() ;
                break;

        case 3: bolhaNome();
                listar();

                break;

        case 4: bolhaIdade();
                listar();
                break;

        case 5: buscaSeq();
                break;

        case 6: cout << "\nDigite o Nome:";
                cin.ignore();
                getline(cin, nome ); 

                encontrou = buscaBinaria( nome );

                if (encontrou != -1){
                  cout<<"\nO nome está na posição " << encontrou << endl;
                }
                else{
                   
                  cout << "\nNome inexistente na lista:\n";
                }
                system("sleep 5");
                break;

        case 7: exit(0); break;
    }    
    
    goto Menu;
}