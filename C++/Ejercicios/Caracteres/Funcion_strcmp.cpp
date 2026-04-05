//Comparar cadenas - Función strcmp()

#include<iostream>
#include<string.h>

using namespace std;

int main(){
	char palabra1[] = "Hola";
	char palabra2[] = "Hola";
	
	if(strcmp(palabra1, palabra2) == 0){
		cout<<"Ambas cadenas son iguales"<<endl;
	}
	
	return 0;
}
