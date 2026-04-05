/*
	Ejercicio 16: Realice un programa que calcule la descomposición en factores primos de un número entero.
				  Por ejemplo: 20 = 2*2*5.
*/

#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int main(){
	int numero, i=2;
	string texto = "";
	
	cout<<"Digite un numero: "; cin>>numero;
	
	do{
		while(numero%i == 0){
			numero /= i;
			stringstream ss;
            ss << i;
            if(texto != ""){
			    texto += "*";
			}
			texto += ss.str();
	  		i = 2;
		}
		i++;
	}while(numero != 1);
	
	cout<<"La descomposicion en factores de: "<<numero<<" = "<<texto;
	
	return 0;
}
