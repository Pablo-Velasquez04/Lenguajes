/*
	Ejercicio 3: Escribe un programa que lea de la entrada estándar un vector de números y muestre en la salida estándar los números del vector 
	             con sus índices asociados.
*/

#include<iostream>

using namespace std;

int main(){
	int numeros[100], n;
	
	cout<<"Digite el numero de elementos que va a tener el arreglo: ";
	cin>>n;
	
	for(int i=0; i<n; i++){
		cout<<"Digite un numero: ";
		cin>>numeros[i]; //Guardamos todos los elementos del vector
	}
	
	//Ahora, vamos a mostrar los elementos con sus indices asociados
	
	for(int i=0; i<n; i++){
		cout<<i<<" -> "<<numeros[i]<<endl;
	}
	
	return 0;
}
