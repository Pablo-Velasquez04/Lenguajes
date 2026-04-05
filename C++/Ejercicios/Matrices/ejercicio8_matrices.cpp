//Ejercicio 8: Realice un programa que calcule el producto de dos matrices cuadradas de 3x3.

#include<iostream>

using namespace std;

int main(){
	int matriz1[3][3], matriz2[3][3], producto[3][3];
	
	cout<<"Llenando la Matriz 1\n";
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: "; cin>>matriz1[i][j];
		}
	}
	
	cout<<"\nLlenando la Matriz 2\n";
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: "; cin>>matriz2[i][j];
		}
	}
	
	cout<<"\nProducto entre la Matriz 1 y Matriz 2\n";
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			producto[i][j] = matriz1[i][j] * matriz2[i][j];
		}
	}
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<producto[i][j]<<"\t";
		}
		cout<<"\n";
	}
	
	return 0;
}
