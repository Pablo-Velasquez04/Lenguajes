/*
	Ejercicio 8: Escriba una función nombrada cambio() que tenga un parámetro en número entero y seis parámetros de 
			     referencia en número entero nombrados cien, cincuenta, veinte, diez, cinco y uno, respectivamente. 
				 La función tiene que considerar el valor entero transmitido como una cantidad en dólares y convertir 
				 el valor en el número menor de billetes equivalentes.
*/

#include<iostream>
using namespace std;

void cambio(int, int& , int&, int&, int&, int&, int&);

int main(){
	int cantidad, cien=0, cincuenta=0, veinte=0, diez=0, cinco=0, uno=0;
	
	cout<<"Ingrese la cantidad: "; cin>>cantidad;
	
	cambio(cantidad, cien, cincuenta, veinte, diez, cinco, uno);
	
	cout<<"\nRESULTADO"<<endl;
	cout<<"Billete ---- Cantidad"<<endl;
	cout<<" 100 	->  "<<cien<<endl;
	cout<<" 50	->  "<<cincuenta<<endl;
	cout<<" 20  	->  "<<veinte<<endl;
	cout<<" 10  	->  "<<diez<<endl;
	cout<<" 5   	->  "<<cinco<<endl;
	cout<<" 1   	->  "<<uno<<endl;
	
	return 0;
}

void cambio(int cantidad, int &cien, int &cincuenta, int &veinte, int &diez, int &cinco, int &uno){
	cien = cantidad/100;
	cincuenta = (cantidad%100)/50;
	veinte = ((cantidad%100)%50)/20;
	diez = (((cantidad%100)%50)%20)/10;
	cinco = ((((cantidad%100)%50)%20)%10)/5;
	uno = (((((cantidad%100)%50)%20)%10)%5)/1;
}
