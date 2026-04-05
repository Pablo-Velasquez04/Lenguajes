// Ejercicio 1: Escribe un programa que defina un vector de números y calcule la suma de sus elementos.

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[] = {2, 6, 4, 5}, suma=0;
	
	for(int i=0; i<4; i++){
		suma += numeros[i];
	}
	
	cout<<"La suma del vector es: "<<suma;
	
	getch();
	return 0;
}

