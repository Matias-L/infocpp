/*
Basado en programa 8.1. Pagina 450, y programa 8.5. Pagina 464

Pasos:
      1- Crear objeto de flujo (ifstream: lectura, ofstream: escritura)
      2- Abir archivo
      3- Comprobar apertura
      4- Operar sobre el archivo
      5- Cerrar archivo

*/

#include <iostream>
#include <string>  //Usado al momento de leer
#include <fstream>
#include <cstdlib>  // necesaria para exit()
#include <fstream>


using namespace std;

void leerArchivo(ifstream&);

int main()
{
  
 ifstream archivo_entr;               //1-Crea objeto de flujo
 
 archivo_entr.open("archivito.txt");// 2- Abre el archivo con el nombre especificado (no olvidar extencion)
 
 if(archivo_entr.fail()){           //3- Comprueba apertura
                         cout<<"Error en la apertura del archivo"<<endl;
                         exit(1);
                         }
 else{cout<<"Archivo abierto exitosamente"<<endl;
      }                        

system("pause");
cout<<endl<<endl;


cout<<endl<<endl;
system("pause");
return 0;
}

void leerArchivo(ifstream& archivoLectura){
     
     string renglon;
     //4- Opera sobre el archivo (lectura)
archivoLectura>>renglon;
while(!archivoLectura.eof()){
                           cout<<renglon<<" ";
                           archivoLectura>>renglon;
                          }


archivoLectura.close();                            //5- Cierra el archivo

     
     }
