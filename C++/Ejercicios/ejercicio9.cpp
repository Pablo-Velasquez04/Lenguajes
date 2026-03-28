//Ejercicio 6: Escriba un programa que lea la nota final de cuatro alumnos y calcule la nota final media de los cuatro alumnos.

#include<iostream>

using namespace std;

int main(){
	float n1, n2, n3, n4, resultado=0;
	
	cout<<"Digite la nota1: "; cin>>n1;
	cout<<"Digite la nota2: "; cin>>n2;
	cout<<"Digite la nota3: "; cin>>n3;
	cout<<"Digite la nota4: "; cin>>n4;
	
	resultado = (n1+n2+n3+n4)/4;
	
	cout<<"\nEl resultado es: "<<resultado<<endl;
	
	return 0;
}
