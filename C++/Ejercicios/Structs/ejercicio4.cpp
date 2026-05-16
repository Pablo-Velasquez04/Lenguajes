/*
	Ejercicio 4: Hacer un arreglo de estructura llamada atleta para N atletas que contenga los siguientes campos: 
			     nombre, país, numero_medallas. y devuelva los datos (Nombre, país) del atleta que ha ganado el 
				 mayor número de medallas.
*/

#include<iostream>
using namespace std;

struct Atleta{
	char nombre[20];
	char pais[20];
	int n_medallas;
}atletas[100];

int main(){
	int n_atletas, mayor=0, atleta=0;
	
	cout<<"Ingrese el numero de atletas: "; cin>>n_atletas; cout<<"\n";
	
	cout<<"Digite los datos de los atletas\n";
	for(int i=0; i<n_atletas; i++){
		fflush(stdin);
		cout<<"\nAtleta No."<<i+1<<endl;
		cout<<"Nombre: "; cin.getline(atletas[i].nombre, 20, '\n');
		cout<<"Pais: "; cin.getline(atletas[i].pais, 20, '\n');
		cout<<"Numero de medallas: "; cin>>atletas[i].n_medallas;
		
		if(atletas[i].n_medallas > mayor){
			mayor = atletas[i].n_medallas;
			atleta = i;
		}
	}
	
	cout<<"\n.:El atleta con mas medallas es:."<<endl;
	cout<<"Nombre: "<<atletas[atleta].nombre<<endl;
	cout<<"Pais: "<<atletas[atleta].pais<<endl;
	cout<<"Numero de medallas: "<<atletas[atleta].n_medallas<<endl;
	
	return 0;
}
