/*
	Ejercicio 6: Escribe un programa que defina un vector de números y calcule si existe algún número en el vector cuyo valor equivale 
				 a la suma del resto de números del vector.
*/

#include<iostream>

using namespace std;

int main(){
	int vector[100], num, suma=0,n;
	
	cout<<"Digite la cantidad de elementos que tendra el vector: "; cin>>n;
	
	for(int i=0; i<n; i++){
		cout<<"Digite un numero: "; cin>>vector[i];
	}
	
	for(int i=0; i<n; i++){
		num = vector[i];
		suma=0;
		for(int j=0; j<n; j++){
			if(i != j){
				suma += vector[j];
			} 
		}
		cout<<suma<<endl;
		if(suma == num){
			cout<<"Si existe un numero que equivale a la suma del resto";
		} 
	}

	return 0;
}
