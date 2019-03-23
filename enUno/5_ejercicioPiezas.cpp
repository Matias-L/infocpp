/*
Ingresa la longitud de una pieza "l"
si la longitud es menor que 0,8 la pieza no es apta
si es mayor a 1,2 es recuperable 
y si esta entre 0,8 y 1,2 es "a".
*/

#include <iostream>

using namespace std;

int main(){

	float longitud;
	cout<<"Ingrese longitud"<<endl;
	cin>>longitud;
	cout<<"Ingresaste: "<<longitud<<endl;

	if(longitud<0.8){
		cout<<"Pieza NO apta"<<endl;

	}
	else{
		if(longitud>1.2){
			cout<<"Pieza RECUPERABLE"<<endl;
		}
		else{
			if(0.8<longitud<1.2){	//Pregunta, ¿es necesario este if?
				cout<<"Es A"<<endl;
			}
			else{
				cout<<"¿Que haces aca?"<<endl;
			}
				
		}
	}





cin.get();
return 0;
}