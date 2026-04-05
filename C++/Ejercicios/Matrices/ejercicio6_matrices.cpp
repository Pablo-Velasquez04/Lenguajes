// Ejercicio 6: Realice un programa que calcule la suma de dos matrices cuadradas de 3x3.

#include<iostream>

using namespace std;

int main(){
	int matriz1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	int matriz2[3][3] = {{2, 4, 1}, {5, 2, 3}, {5, 5, 8}};
	int suma[3][3];
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			suma[i][j] = matriz1[i][j]+matriz2[i][j];
		}
	}
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<suma[i][j]<<"\t";
		}
		cout<<"\n";
	}
	
	return 0;
}
