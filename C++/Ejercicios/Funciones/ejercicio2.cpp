/*
	Ejercicio 2: Escriba una función llamada al_cuadrado() que calcule el cuadrado del valor que se le transmite y 
				 despliegue el resultado. La función deberá ser capaz de elevar al cuadrado números flotantes.
*/

#include<iostream>
#include<cmath>
using namespace std;

//Prototipos
template <class TIPOD>
void pedirDato(TIPOD &num);

template <class TIPOD>
void al_cuadrado(TIPOD numero);

int main(){
	double num1;
	
	pedirDato(num1);
	al_cuadrado(num1);
	
	return 0;
}

template <class TIPOD>
void pedirDato(TIPOD &num){
	cout<<"Digite el numero: "; cin>>num;
}

template <class TIPOD>
void al_cuadrado(TIPOD numero){
	cout<<"El resultado es: "<<pow(numero, 2)<<endl;
}

