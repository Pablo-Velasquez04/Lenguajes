/*
Ejercicio 4: Escriba un programa que tome cada 4 horas la temperatura exterior, leyéndola durante un período de
			24 horas. Es decir, debe leer 6 temperaturas. Calcule la temperatura media del día, la temperatura 
			más alta y la más baja.
*/

#include<iostream>

using namespace std;

int main(){
	float temp, sumTemp=0, result=0;
	int tiempo;
	
	
	for(tiempo=0; tiempo<24; tiempo+=4){
		cout<<"Digite una temperatura: "; cin>>temp;
		sumTemp += temp;
	}
	
	result = sumTemp/6;
	
	cout<<"La media de la temperatura del dia es: "<<result;
	
	return 0;
}
