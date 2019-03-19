#include <iostream>

using namespace std;

bool primo(int);        //Prototipo de la funcion


int main(){
    
  int n;
  bool esPrimo;

  cout << "Ingrese un entero positivo: ";
  cin >> n;

  esPrimo=primo(n);


    
    system("pause");
    return 0;
    }
    
    
//Declaracion de la funcion
//@param: numero entero a determinar si es primo
//@return: false: no es primo
bool primo(int n){
     
     bool aux;
       for(int i = 2; i <= n / 2; ++i)
  {
      if(n % i == 0)
      {
           aux= false;
      }
  }
  //aclarar algo de alcanze. usar "i" como ejemplo
  
  aux =true;
  
    if (aux)
      cout << "ES primo"<<endl;
  else
      cout << "NO es primo"<<endl;
  
return aux;
}
