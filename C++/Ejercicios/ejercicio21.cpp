/*
Ejercicio 8: Escribe un programa que lea de la entrada estándar tres números. Después debe leer un cuarto número e indicar si el número coincide 
			 con alguno de los introducidos con anterioridad.
*/

#include<iostream>

using namespace std;

int main(){
	int n1, n2, n3, n4;
	
	cout<<"Digite los 3 numeros: "; cin>>n1>>n2>>n3;
	cout<<"\nDigite el numero a comparar: "; cin>>n4;
	
	if(n1==n4 || n2==n4 || n3==n4){
		cout<<"\nEl numero a comparar es igual a uno de los 3 numeros ingresados al principio\n";
	} else {
		cout<<"\nEl numero no es igual a ninguno\n";
	}
	
	return 0;
}
