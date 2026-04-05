//Transformar una cadena a numeros - Función atoi() y atof()

//atoi() = "123" -> 123
//atof() = "123.45" -> 123.45

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	char cad[] = "123";
	char cad2[] = "123.45";
	int numero;
	float numero2;
	
	numero = atoi(cad);
	numero2 = atof(cad2);
	
	cout<<numero<<endl;
	cout<<numero2<<endl;
	
	return 0;
}
