#include <iostream>

using namespace std;

int main(){
    
    /*
    Ejemplo para mostrar el uso del operador "modulo".
    */
    
    int dividendo=9;
    int divisor=4;
    int cociente=dividendo/divisor;
    int resto=dividendo%divisor;
    
    cout<<"El cociente de 9/4 es= "<<cociente<<endl<<endl;
    system("pause");
    cout<<"El resto es= "<<resto<<endl<<endl;
    system("pause");
    
    cout<<"Se verifica que cociente*divisor+resto=dividendo: "<<
    cociente*divisor+resto<<endl<<endl;
    
    
    
    system("pause");
    return 0;
    }
