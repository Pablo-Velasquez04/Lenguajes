/*
Ejercicio 6: Escriba un programa que calcule x^y, donde tanto x como y son enteros positivos, sin utilizar la 
			   función pow.
*/

#include<iostream>

using namespace std;

int main(){
	int x, y, result=1;
	
	cout<<"Digite el valor de x: "; cin>>x;
	cout<<"Digite el valor de y: "; cin>>y;
	
	for(int i=y; i>=1; i--){
		result*=x;
	}
	
	cout<<"\nEl resultado es: "<<result;
	
	return 0;
}
