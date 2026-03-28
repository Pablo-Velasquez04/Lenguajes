//Ejercicio 8: Escriba un programa que lea de la entrada estándar los dos catetos de un triángulo rectángulo y escriba en la salida estándar su hipotenusa.

#include<iostream>
#include<cmath>

using namespace std;

int main(){
	float ca, cb, hip=0;
	
	cout<<"Digite el cateto a: "; cin>>ca;
	cout<<"Digite el cateto b: "; cin>>cb;
	
	hip = sqrt((ca*ca)+(cb*cb));
	
	cout.precision(3);
	cout<<"\nLa hipotenusa es: "<<hip<<endl;
	
	return 0;
}
