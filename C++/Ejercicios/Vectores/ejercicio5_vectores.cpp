// Ejercicio 5: Desarrolle un programa que lea de la entrada estándar un vector de enteros y determine el mayor elemento del vector.

#include<iostream>

using namespace std;

int main(){
	int vector[100], n, num;
	
	cout<<"Digite la cantidad de elementos del vector: "; cin>>n;
	
	for(int i = 0; i<n; i++){
		cout<<"Digite un numero: "; cin>>vector[i];  //Almacenamos los numeros en el vector
	}
	
	num = vector[0];
	
	for(int i=0; i<n; i++){
		if(num<vector[i]){
			num = vector[i+1];
		}
	}
	
	cout<<"El numero mas grande del vector es: "<<num<<endl;
	
	return 0;
}
