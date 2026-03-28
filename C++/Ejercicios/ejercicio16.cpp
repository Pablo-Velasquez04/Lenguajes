//Ejercicio 3: Realice un programa que lea un valor entero y determine si se trata de un número par o impar.


#include<iostream>

using namespace std;

int main(){
	int n1, par, impar;
	
	cout<<"Digite un numero: "; cin>>n1;
	
	if(n1==0){
		cout<<"El numero es cero";
	} else if(n1 % 2 == 0){
		cout<<"El numero es PAR";
	} else {
		cout<<"El numero es IMPAR";
	}
	
	return 0;
}
