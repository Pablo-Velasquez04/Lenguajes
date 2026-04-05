// Ejercicio 6: Convertir dos cadenas de minusculas a MAYUSCULAS. Compararlas, y decir si son iguales o no.

#include<iostream>
#include<string.h>

using namespace std;

int main(){
	char cad1[100], cad2[100];
	
	cout<<"Ingresa la cadena 1: "; cin.getline(cad1, 100);
	cout<<"Ingresa la cadena 2: "; cin.getline(cad2, 100);
	
	strupr(cad1);
	strupr(cad2);
	
	cout<<cad1<<endl;
	cout<<cad2<<endl;
	
	if(strcmp(cad1, cad2) == 0){
		cout<<"\nAmbas cadenas son iguales"<<endl;
	} else {
		cout<<"\nNo son iguales"<<endl;
	}
	
	return 0;
}
