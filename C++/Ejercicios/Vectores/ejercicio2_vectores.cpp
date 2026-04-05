// Ejercicio 2: Escribe un programa que defina un vector de números y calcule la multiplicación acumulada de sus elementos.

#include<iostream>

using namespace std;

int main (){
	int vector[] = {2, 5, 7, 3}, mult=1;
	
	for(int i=0; i<4; i++){
		mult *= vector[i];
	}
	
	cout<<"La multiplicacion acumulada del vector es: "<<mult<<endl;
	
	return 0;
}
