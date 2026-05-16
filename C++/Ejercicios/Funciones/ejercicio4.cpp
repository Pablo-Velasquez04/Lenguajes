/*
	Ejercicio 4: Escriba un programa en C++ que devuelva la parte fraccionaria de cualquier número introducido por 
				 el usuario. Por ejemplo, si se introduce el número 256.879, debería desplegarse el número 0.879.
*/

#include<iostream>
using namespace std; 

//Prototipos de Función
void pedirDatos();
void p_fraccionaria(float x);

float num;

int main(){
	pedirDatos();
	p_fraccionaria(num);
	
	return 0;
}

void pedirDatos(){
	cout<<"Ingrese un numero: "; cin>>num;
}

void p_fraccionaria(float x){
	int entero;
	
	entero = x;
	x -= entero;
	
	printf("La parte fraccionaria del numero es: %.4f", x);
}

