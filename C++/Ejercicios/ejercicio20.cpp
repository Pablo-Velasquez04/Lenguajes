// Ejercicio 7: Escriba un programa que solicite una edad (un entero) e indique en la salida estándar si la edad introducida está en el rango [18-25].

#include<iostream>

using namespace std;

int main(){
	int edad;
	
	cout<<"Ingrese su edad: "; cin>>edad;
	
	if(edad>=18 && edad<=25){
		cout<<"La edad introducida esta en el rango de 18-25";
	} else{
		cout<<"No esta en el rango";
	}
	
	return 0;
}
