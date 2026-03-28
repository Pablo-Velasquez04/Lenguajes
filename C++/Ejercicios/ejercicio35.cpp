//Ejercicio 11: Escriba un programa que calcule el valor de: 2^1+2^2+2^3+...+2^n

#include<iostream>
#include<math.h>

using namespace std;

int main(){
	int exp, result=0;
	
	cout<<"Digite el numero n: "; cin>>exp;
	
	for(int i=1; i<=exp; i++){
		result += pow(2, i);
	}
	
	cout<<"\nEl resultado es: "<<result;
	
	return 0;
}
