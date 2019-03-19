/*
Basado en programa 8.4. Pagina 460

Pasos:
      1- Crear objeto de flujo (ifstream: lectura, ofstream: escritura)
      2- Abir archivo
      3- Comprobar apertura
      4- Operar sobre el archivo
      5- Cerrar archivo

*/


#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <iomanip>

using namespace std;

int main(){
    
    ofstream archivoSalida;               //1- Crea objeto flujo 
    
    archivoSalida.open("Salida.txt");     //2- Abre archivo
    
    if(archivoSalida.fail()){             //3- Comprueba apertura
                             cout<<"Error en la creacion del archivo"<<endl;
                             exit(1);
                             }
    else{cout<<"Archivo creado con exito"<<endl<<endl;
         }
      
    //4- Escribo en el archivo
    
    archivoSalida<<"Renglon 60"<<endl;
    //archivoSalida<<"Renglon 5"<<endl;
    //archivoSalida<<"Renglon 6"<<endl;
    //Mostrar como sobreescribe
    
    
    archivoSalida.close();   //5- Cierro archivo
         
    
    
    system("pause");
    return 0;
    }
