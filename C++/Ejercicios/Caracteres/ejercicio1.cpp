/*
	Ejercicio1: Hacer un programa que pida al usuario que digite una cadena de caracteres, luego verificar la longitud de la cadena, y si está
				superar a 10 caracteres mostrarla en pantalla, caso contrario no mostrarla.
*/

#include<iostream>
#include<string.h>

using namespace std;

int main(){
	char cadena[100];
	int longitud = 0;
	
	cout<<"Digite una cadena de caracteres: "; cin.getline(cadena,100);
	longitud = strlen(cadena);
	cout<<longitud<<endl;
	
	if(longitud > 10){
		cout<<cadena;
	}
	
	return 0;
}
