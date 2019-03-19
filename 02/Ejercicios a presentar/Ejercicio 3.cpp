#include <iostream>     //Para usar cout y cin
#include <math.h>       //Para sqrt
#include <iomanip>      //"IO manipulators", Para setprecision

using namespace std;

int main(){
    //Programa para mostrar la diferencia entre float y doble.
    //Tambien mostrar el uso de "set precision"
    
    int raizEntera=sqrt(2);
    float raizFlotante= sqrt(2);
    double raizDoble= sqrt(2);
    
    cout<<"Raiz entera= "<<raizEntera<<"\n";
    cout<<"Raiz flotante= "<<raizFlotante<<"\n";
    cout<<"Raiz doble=    "<<raizDoble<<"\n";
    
    //Cambiando presicion
    cout<<"\n";
    cout<<"\n";
    
    int presicion = 20;
    cout<<setprecision(presicion)<<"Raiz entera= "<<raizEntera<<"\n";
    cout<<fixed<<setprecision(presicion)<<"Raiz flotante= "<<raizFlotante<<"\n";
    cout<<fixed<<setprecision(presicion)<<"Raiz doble=    "<<raizDoble<<"\n";
   
    //Se podria haber esrito tambien
    /*
    cout.precision(20);
    cout<<fixed;
    cout<<"Raiz entera= "<<raizEntera<<"\n";
    cout<<"Raiz flotante= "<<raizFlotante<<"\n";
    cout<<"Raiz doble=    "<<raizDoble<<"\n";
    */    
            
    system ("pause");
    return 0;
    }
