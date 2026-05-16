//Estructura básica en C++

#include<iostream>

using namespace std;

struct Persona{
	char nombre[20];
	int edad;
}
	persona1{"Pablo", 22},
	persona2{"Daniel", 21},
	persona3;
	
int main(){
	cout<<"Imprimiendo datos de la persona1 y persona2\n";
	cout<<"\nNombre1: "<<persona1.nombre<<endl;
	cout<<"Edad1: "<<persona1.edad<<endl;
	
	cout<<"\nNombre2: "<<persona2.nombre<<endl;
	cout<<"Edad2: "<<persona2.edad<<endl;
	
	cout<<"\nIngrese su nombre: "; cin.getline(persona3.nombre, 20, '\n');
	cout<<"Ingrese su Edad: "; cin>>persona3.edad;
	
	cout<<"\nImprimiendo datos\n";
	cout<<"Nombre: "<<persona3.nombre<<endl;
	cout<<"Edad: "<<persona3.edad<<endl;
	
	return 0;
}
