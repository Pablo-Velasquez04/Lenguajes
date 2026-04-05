/*
	Ejercicio 3: Pedir al usuario que digite 2 cadenas de caracteres, e indicar si ambas cadenas son iguales, en caso de no serlos, indicar cual 
				 es mayor alfabeticamente
*/

#include<iostream>
#include<string.h>

using namespace std;

int main(){
	char cadena1[100], cadena2[100];
	
	cout<<"Digite la cadena 1: "; cin.getline(cadena1, 100);
	cout<<"Digite la cadena 2: "; cin.getline(cadena2, 100);
	
	if(strcmp(cadena1, cadena2) == 0){
		cout<<"Ambas cadenas son iguales"<<endl;
	} else {
		if(strcmp(cadena1, cadena2) > 0){
			cout<<"La cadena 1: "<<cadena1<<" \nEs el mayor alfabeticamente"<<endl;
		} else{
			cout<<"La cadena 2: "<<cadena2<<" \nEs el mayor alfabeticamente"<<endl;
		}
	}
	
	return 0;
}
