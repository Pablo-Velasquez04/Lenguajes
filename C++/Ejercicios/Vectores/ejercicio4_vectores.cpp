/*
	Ejercicio 4: Escribe un programa que defina un vector de números y muestre en la salida estándar el vector en orden 
				 inverso—del último al primer elemento.
*/

#include<iostream>

using namespace std;

int main(){
	int vector[100], n;
	
	cout<<"Digite la cantidad de elementos que tendra el vector: "; cin>>n;
	
	for(int i=0; i<n; i++){
		cout<<"Digite un numero: "; cin>>vector[i];  //guardamos los numeros en el vector
	}
	
	//Ahora vamos a imprimir el vector en el orden inverso
	for(int i=0; i<n; i++){
		cout<<n-(i+1)<<" -> "<<vector[n-(i+1)]<<endl;
	}	
	
	return 0;
}
