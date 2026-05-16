/*
	Ejercicio 6: Escriba una plantilla de función llamada maximo() que devuelva el valor máximo de tres 
				 argumentos que se transmitan a la función cuando sea llamada. Suponga que los tres argumentos 
				 serán del mismo tipo de datos.
*/

#include<iostream>
using namespace std;

//Prototipo
template <class TIPOD>
TIPOD maximo(TIPOD dato1, TIPOD dato2, TIPOD dato3);

int main(){
	cout<<"El valor maximo es: "<<maximo(12, 5, 28);
	return 0;
}

template <class TIPOD>
TIPOD maximo(TIPOD dato1, TIPOD dato2, TIPOD dato3){
	if(dato1>dato2 && dato1>dato3){
		return dato1;
	} else if(dato2>dato1 && dato2>dato3){
		return dato2;
	} else if(dato3>dato1 && dato3>dato2){
		return dato3;
	} 
}
