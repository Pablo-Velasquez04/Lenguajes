//Ejercicio 1: Escriba un programa que lea dos números y determine cuál de ellos es el mayor.

#include<iostream>

using namespace std;

int main(){
	int n1, n2;
	
	cout<<"Digite 2 numero: ";
	cin>>n1>>n2;
	
	if(n1>n2){
		cout<<"El mayor es: "<<n1;
	} else if(n1==n2){
		cout<<"Ambos numero son iguales";
	}else{
		cout<<"El mayor es: "<<n2;
	}
	
	return 0;
}
