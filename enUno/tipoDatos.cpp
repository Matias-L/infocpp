#include <iostream>
//Basado en programa 2.5 y figura 2.8

using namespace std;

int main (int argc, char *argv[])
{
  cout<<"Tipo de dato     Bytes" << endl<<endl;
  cout<<"int:             "<<sizeof(int)<<endl;
  cout<<"char:            "<<sizeof(char)<<endl;
  cout<<"bool:            "<<sizeof(bool)<<endl<<endl;
  cout<<"float:           "<<sizeof(float)<<endl;
  cout<<"doble:           "<<sizeof(double)<<endl;
  cout<<"long doble:      "<<sizeof(long double)<<endl<<endl;
  cout<<"short int:       "<<sizeof(short int)<<endl;
  cout<<"long int:        "<<sizeof(long int)<<endl;
  cout<<"long long int:   "<<sizeof(long long int)<<endl<<endl;
  cout<<"unsigned int:    "<<sizeof(unsigned int)<<endl<<endl; //Tabla 2.5;
  
  cout << "Presione ENTER para continuar..." << endl; 
  cin.get();
  return 0;
}
