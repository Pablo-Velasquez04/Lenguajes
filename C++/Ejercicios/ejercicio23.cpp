/*
Ejercicio 12: Hacer un menú que considere las siguientes opciones:
  Caso 1: Cubo de un numero
  Caso 2: Numero par o impar
  Case 3: salir.
*/

#include<iostream>
#include<Math.h>

using namespace std;

int main(){
	int opcion, num, cubo;
	
	cout<<"1. Cubo de un numero"<<endl;
	cout<<"2. Numero par o impar"<<endl;
	cout<<"3. Salir"<<endl;
	cout<<"Opcion: "; cin>>opcion;	
	
	switch(opcion){
		case 1: 
			cout<<"Ingrese el numero: "; cin>>num;
			cubo = pow(num, 3);
			cout<<"El cubo del numero es: "<<cubo<<endl;
			break;
		case 2:
			cout<<"Ingrese el numero: "; cin>>num;
			if(num % 2 == 0){
				cout<<"El numero es PAR"<<endl;
			} else {
				cout<<"El numero es IMPAR"<<endl;
			}
			break;
		case 3: break;
	}
	
	return 0;
}
