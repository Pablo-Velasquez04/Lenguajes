/*
	Ejercicio 4:  Hacer una matriz preguntando al usuario el numero de filas y columnas,llenarla de números aleatorios, copiar el contenido a 
				  otra matriz y por último mostrarla en pantalla.
*/

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
	int matriz1[100][100], matriz2[100][100], filas, columnas;
	
	srand(time(NULL));
	
	cout<<"Digite el numero de filas: "; cin>>filas;
	cout<<"Digite el numero de columnas: "; cin>>columnas;
	
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			matriz1[i][j] = rand() % 100 + 1; //número aleatorios de 0 a 100
		}
	}
	
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			matriz2[i][j] = matriz1[i][j];
		}
	}
	
	cout<<"\nMatriz 2 (copia)\n";
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			cout<<matriz2[i][j]<<" ";
		}
		cout<<"\n";
	}
		
	return 0;
}
