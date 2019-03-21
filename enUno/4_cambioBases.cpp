#include <iomanip>
#include <iostream>
#include <bitset>

/*
Programa para mostrar como representar los numeros en diferentes bases, el uso de "cin",
el modificador "showbase", sentencias IF-ELSE y SWITCH.

*/


using namespace std;

int main(){

 int numero = 0;
 int opcion=0;
 bool base=0;	//0:falso, todo lo demas verdadero

 cout<<"Ingrese un número entero"<<endl;
 cin>>numero;

 cout<<"Ingrese la base en que desea mostrarlo"<<endl;
 cout<<"1-Decimal"<<endl;
 cout<<"2-Hexadecimal"<<endl;
 cout<<"3-Octal"<<endl;
 cout<<"4- Binario"<<endl;
 cin>>opcion;
/*
Mostrar por que seria util explicitar la base. 
Ejemplo, correr 3 veces el programa, mostrando el numero 55 en todas las bases.
¿Ven por que es confuso?
Primero descomentar esta linea:
*/
//cout<<showbase;


/*
Comentar la linea anterior, y descomentar esta porcion, para mostrar el uso de IF-ELSE
*/
/*
 cout<<"¿Mostrar base?"<<endl;
 cin>>base;

   if(base){
    cout<<showbase;
   }
    else{
     cout<<noshowbase;
    }
*/
	switch(opcion){

	case 1:
	 cout<<numero<<endl;
	break;

	case 2:
	 cout<<hex<<numero<<endl;
	break;

	case 3:
	 cout<<oct<<numero<<endl;
	break;
	
	case 4:
	 cout<<std::bitset<32>(numero)<<endl;
	break;

	default: cout<<"ERROR"<<endl<<endl;
	}

cin.get();
return 0;
}

