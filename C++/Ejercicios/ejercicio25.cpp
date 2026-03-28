/*
Ejercicio 2: Realice un programa que lea de la entrada estándar números hasta que se introduzca un cero. En ese momento el programa debe terminar y 
			 mostrar en la salida estándar el número de valores mayores que cero leídos.
*/

#include<iostream>

using namespace std;

int main(){
	int num, contador;
	
	do{
		cout<<"Introduzca un numero: "; cin>>num;
		if(num == 0){
			break;
		}else if(num > 0){
			contador++;	
		}
	}while(num != 0);
	
	cout<<"\nContador: "<<contador;
	
	return 0;
}
