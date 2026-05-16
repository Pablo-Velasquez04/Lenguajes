//Ejemplo encontrar el mayor de 2 numeros
//FUNCIONES

#include<iostream>
using namespace std;

//Prototipo de Función
int encontrarMax(int x, int y);

int main(){
	int n1, n2;
	
	cout<<"Digite 2 numeros: "; cin>>n1>>n2;
	
	cout<<"El mayor de los dos numeros es: "<<encontrarMax(n1, n2)<<endl;
	
	return 0;
}

//Definición de Función
int encontrarMax(int x, int y){
	int numMax;
	if(x > y){
		numMax = x;
	}else{
		numMax = y;
	}
	
	return numMax;
}
