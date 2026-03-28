//Ejercicio 10: Escriba un programa que calcule el valor de: 1!+2!+3!+...+n! (suma de factoriales).

#include<iostream>

using namespace std;

int main(){
	int j=1,n, suma=0, factorial=1;
	
	cout<<"Digite el numero de elementos: "; cin>>n;
	
	while(n>=j){
		for(int i=1; i<=j; i++){
			factorial *= i;
		}
		cout<<"Resutado factorial: "<<factorial<<endl;
		suma += factorial;
		factorial = 1;
		j++;
	}
	
	cout<<"\nEl resultado es: "<<suma;
	
	return 0;
}
