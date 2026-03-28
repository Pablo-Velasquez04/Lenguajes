//Ejercicio 1: Realice un programa que solicite de la entrada estándar un entero del 1 al 10 y muestre en la salida estándar su tabla de multiplicar.

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int num1, result=0;
	
	cout<<"Digite un numero: "; cin>>num1;
	
	for(int i=1; i<=10; i++){
		result = i*num1;
		cout<<result<<endl;
	}
	
	return 0;
}
