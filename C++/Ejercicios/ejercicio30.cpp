//Ejercicio 8: Escriba un programa que calcule el valor de: 1+3+5+...+2n-1

#include<iostream>

using namespace std;

int main(){
	int n, suma;
	
	cout<<"Digite el numero de elementos: "; cin>>n;
	
	for(int i=1; i<=n; i++){
		suma += (2*i-1);
	}
	
	cout<<"\nEl resultado es: "<<suma;
	
	return 0;
}
