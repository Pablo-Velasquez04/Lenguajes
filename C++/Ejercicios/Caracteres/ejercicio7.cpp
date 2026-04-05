// Ejercicio 7: Pedir su nombre al usuario en MAYÚSCULA, si su nombre comienza por la letra A, convertir su nombre a minusculas, caso contrario no convertirlo

#include<iostream>
#include<string.h>

using namespace std;

int main(){
	char nombre[30], minusculas[30];
	
	cout<<"Escriba su nombre en Mayusculas: "; cin.getline(nombre, 30);
	
	if(nombre[0] == 'A'){
		strlwr(nombre);
		cout<<nombre<<endl;
	} else {
		cout<<nombre<<endl;
	}
	
	return 0;
}
