// Ejercicio 2: Pedir al usuario una cadena de caracteres, almacenarla en un arreglo y copiar todo su contenido hacia otro arreglo de caracteres

#include<iostream>
#include<string.h>

using namespace std;

int main(){
	char entrada[100], cadena[100];
	
	cout<<"Ingrese una cadena de caracteres: "; cin.getline(entrada, 100);
	
	strcpy(cadena, entrada);
	
	cout<<cadena<<endl;
	
	return 0;
}
