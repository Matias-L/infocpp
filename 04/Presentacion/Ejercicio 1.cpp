/*

*Hacer una pequeña calculadora que transforme grados centigrados a kelvin, y 
viceversa.
(Si lo desea, puede incluir grados Fahrenheit).

*Debe permitir presentar el resultado en notacion fija, cientifica o por defecto.
Se debe primero mostrar un menu que permita elegir una de estas tres opciones de formato.

*Luego, muestra otro menu preguntando que conversión se realizará.

(Si vieron bucles, agregar que pregunte si quiere hacer otra conversion).
(Si vieron bucles: El menu debe darle al usuario una opcion para especificar la precision.)

*El programa debe dar un mensaje de error si el usuario ingresa algo no valido por teclado.

*Usar bloques "if-else" y "switch".

*Se debe controlar los valores kelvin negativos.

*/
#include <iostream>

using namespace std;

int main(){
    
    int formato=0;  //0=fixed 1=cientifica 2=exponencial
    int operacion=0;
    float grados=0;


    cout<<"Super calculadora v1.0"<<endl;
    cout<<"Elija el formato de salida"<<endl<<"0: Notacion fija"<<endl<<"1: cientifica"
    <<endl<<"2: por defecto"<<endl;
    cin>>formato;
    
    if((formato==0)||(formato==1)||(formato==2)){
      switch(formato){
                         case 0: cout<<fixed;
                         break;
                         case 1: cout<<scientific;
                         break;
                         case 2: break;
                         default: break;     
                         }
         
         
         
         cout<<"Ingrese la accion a realizar"<<endl;
         cout<<"1- C a K"<<endl<<"2- K a C"<<endl<<endl;
         cin>>operacion;
         
         switch(operacion){
         case 1: cout<<"C: ";
                 cin>>grados;
                 grados+=273.15;
                               if (grados<0){
                               cout<<"Error: Corresponde a un valore en K negativo"<<endl;
                               cout<<"Cerrando el programa"<<endl;
                               break;
                               }
                 cout<<endl<<"K: "<<grados<<endl;
                 break;
         case 2: cout<<"K: ";
                 cin>>grados;
                               if (grados<0){
                               cout<<"Error: Corresponde a un valore en K negativo"<<endl;
                               cout<<"Cerrando el programa"<<endl;
                               break;
                               }                 
                 grados-=273.15;
                 cout<<endl<<"C: "<<grados<<endl;
                 break;
         default: cout<<"Que raro. No deberias haber llegado aca."<<endl;
                  break;
         }//fin switch
         
         
      }//Fin IF
    else{
        cout<<"Error: Opcion no valida"<<endl<<endl;
        }
        
system("pause");
return 0;     
         }
