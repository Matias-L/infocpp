#include <iostream>
#include <iomanip>
#include <math.h>
//Formateo basico de numeros
//Recomendacion para la casa:darle una mirada a "setiosflags"

using namespace std;

int main (int argc, char *argv[])
{
    int velocidadLuz= 299792458;
    float avogadro=6.022140758*pow(10, 23);
    float numChico= 0.000019;
    
  cout<<"Por defecto"<<endl<<endl;  
  cout<<velocidadLuz<<endl;
  cout<<avogadro<<endl;
  cout<<numChico<<endl<<endl;
  
  cout<<"Notacion cientifica"<<endl<<endl;  
  cout<<scientific;
  cout<<velocidadLuz<<endl;
  cout<<avogadro<<endl;
  cout<<numChico<<endl<<endl;
  
  cout<<"Notacion fija, 10 decimales"<<endl<<endl;
  cout<<fixed<<setprecision(10);  
  cout<<velocidadLuz<<endl;
  cout<<avogadro<<endl;
  cout<<numChico<<endl;
  
    
  
  
  cin.get();
  return 0;
}
