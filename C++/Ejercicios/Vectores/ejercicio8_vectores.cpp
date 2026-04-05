// Ejercicio 8: Hacer un programa que lea 5 números en un arreglo, los copie a otro arreglo multiplicados por 2 y muestre el segundo arreglo.

#include<iostream>

using namespace std;

int main(){
	int vector1[5], vector2[5];
	
	for(int i=0; i<5; i++){
		cout<<"Digite un numero: "; cin>>vector1[i];
		
		vector2[i] = vector1[i]*2;
	}
	
	for(int i=0; i<5; i++){
		cout<<vector2[i]<<endl;
	}
	
	return 0;
}
