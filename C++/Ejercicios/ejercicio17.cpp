//Ejercicio 4: Comprobar si un número digitado por el usuario es positivo o negativo.

#include<iostream>

using namespace std;

int main(){
	int n1, pos, neg;
	
	cout<<"Ingrese un numero: "; cin>>n1;
	
	if(n1==0){
		cout<<"El numero es cero";
	} else if(n1>0){
		cout<<"El numero es positivo";
	} else {
		cout<<"El numero es negativo";
	}
	
	return 0;
}
