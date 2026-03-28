//Ejercicio 9: Escriba un programa que calcule el valor de: 1*2*3*...*n (factorial)

#include<iostream>

using namespace std;

int main(){
	int n, factorial=0;
	
	cout<<"Digite el numero para el factorial: "; cin>>n;
	
	for(int i=1; i<=n; i++){
		factorial *= (i-n)
	}
	
	return 0;
}
