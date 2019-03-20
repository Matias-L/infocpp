#include <iostream>

using namespace std;

int main(){
    /*
      Sección 2.5 del libro (p70). Declaracion y asignacion
    */
    
    int a;                  //Comunmente, 8 bytes (2^32)
    char b;                 //1 byte por letra codigo ASCII
    double c;
    
    cout<<"a "<<a<<endl<<"b: "<<b<<endl<<"c: "<<c<<endl<<endl;
    
    a=10;
    b='b';
    c=10.45;
    cout<<"Asignando valores"<<endl;
    cout<<"a: "<<a<<endl<<"b: "<<b<<endl<<"c: "<<c<<endl;
    
    
    
    system("pause");
    return 0;
    }
