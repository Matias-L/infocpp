#include <iostream>

using namespace std;

int main(){
    
  int n, i;
  bool esPrimo = true;

  cout << "Ingrese un entero positivo: ";
  cin >> n;

  for(i = 2; i <= n / 2; ++i)
  {
      if(n % i == 0)
      {
          esPrimo = false;
          break;
      }
  }
  if (esPrimo)
      cout << "ES primo"<<endl;
  else
      cout << "NO es primo"<<endl;
    
    system("pause");
    return 0;
    }
