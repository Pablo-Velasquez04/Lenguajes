//Ejercicio 7: Escriba un programa que calcule el valor de: 1+2+3+...+n

#include<iostream>

using namespace std;

int main(){
	int n, suma=0;
	
	cout<<"Digigte el numero de elementos: "; cin>>n;
	
	for(int i=1; i<=n;i++)
		suma += i;
	}
	
	cout<<"\nLa suma es: "<<suma;
	
	return 0; 
}
