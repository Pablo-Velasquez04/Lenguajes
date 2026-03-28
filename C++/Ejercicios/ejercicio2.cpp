/*Ejercicio 2: Escribe un programa que lea de la entrada estándar el precio de un producto y muestre en la 
				salida estándar el precio del producto al aplicarle el IVA.*/
				
#include<iostream>

using namespace std;

int main(){
	float precio, iva=0.10, resultado=0;
	
	cout<<"Ingrese el precio del producto: "; cin>>precio;
	
	resultado = precio-(precio*iva);
	cout<<"Total (IVA=0.10 aplicado) es: "<<resultado;
	
	return 0;
}
