/*
Ejercicio 6: Escriba un programa que lea de la entrada estándar un carácter e indique en la salida estándar si el carácter es una vocal minúscula, 
			 es una vocal mayúscula o no es una vocal.
*/

#include<iostream>

using namespace std;

int main(){
	char letra;
	
	cout<<"Digite un caracter: "; cin>>letra;
	
	switch(letra){
		case 'a':
		case 'e':
		case 'i':
	    case 'o':
	    case 'u': cout<<"La vocal es una minuscula"; break;
	    case 'A':
	    case 'E':
	    case 'I':
	    case 'O':
	    case 'U': cout<<"La vocal es una mayuscula"; break;
	    default: cout<<"Caracter introduccido no es una vocal";
	}
	
	return 0;
}
