/*
	Ejercicio 8: Pedir al usuario 2 cadenas de caracteres de numeros, uno entero y el otro real, convertirlo a sus respectivos valores y por ultimo
				 sumarlos.
*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	char num1[30], num2[30];
	int entero;
	float flotante, suma;
	
	cout<<"Digite un numero entero: "; cin.getline(num1, 30);
	cout<<"Digite un numero flotante: "; cin.getline(num2, 30);
	
	entero = atoi(num1);
	flotante = atof(num2);
	
	suma = entero+flotante;
	
	cout<<"\nEl resultado de la suma es: "<<suma<<endl;
	
	return 0;
}
