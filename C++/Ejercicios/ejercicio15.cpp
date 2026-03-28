//Ejercicio 2: Escriba un programa que lea tres números y determine cuál de ellos es el mayor.

#include<iostream>

using namespace std;

int main(){
	int n1, n2, n3;
	
	cout<<"Digite 3 numeros: "; cin>>n1>>n2>>n3;
	
	if(n1>n2 && n1>n3){
		cout<<"El mayor es el: "<<n1;
	} else if(n2>n1 && n2>n3){
		cout<<"El mayor es el: "<<n2;
	} else if(n3>n1 && n3>n2){
		cout<<"El mayor es el: "<<n3;
	} else {
		cout<<"Todos los numeros son iguales";
	}
	
	return 0;
}
