/*
	Ejercicio 6: Utilizar las 2 estructuras del problema 5, pero ahora pedir los datos para N alumnos, y calcular 
				 cuál de todos tiene el mejor promedio, e imprimir sus datos.
*/

#include<iostream>
using namespace std;

struct Promedio{
	float nota1;
	float nota2;
	float nota3;
};

struct Alumno{
	char nombre[20];
	char sexo[10];
	int edad;
	struct Promedio prom;
}alumnos[100];


int main(){
	float promedio, prom_alto=0;
	int n_alumnos, i_alumno=0;
	
	cout<<"Digite la cantidad de alumnos: "; cin>>n_alumnos;
	
	cout<<"\nA continuacion digite los datos de todos los alumnos:"<<endl;
	for(int i=0; i<n_alumnos; i++){
		cin.ignore(1000, '\n');
		cout<<"\nAlumno "<<i+1<<endl;
		cout<<"Nombre: "; cin.getline(alumnos[i].nombre, 20, '\n');
		cout<<"Sexo: "; cin.getline(alumnos[i].sexo, 10, '\n');
		cout<<"Edad: "; cin>>alumnos[i].edad;
		
		cout<<"Nota1: "; cin>>alumnos[i].prom.nota1;
		cout<<"Nota2: "; cin>>alumnos[i].prom.nota2;
		cout<<"Nota3: "; cin>>alumnos[i].prom.nota3;
		
		promedio = (alumnos[i].prom.nota1+alumnos[i].prom.nota2+alumnos[i].prom.nota3)/3;
		
		if(promedio > prom_alto){
			prom_alto = promedio;
			i_alumno = i;
		}
	}
	
	cout<<"\n.:Datos del Alumno con mayor promedio:.\n";
	cout<<"Nombre: "<<alumnos[i_alumno].nombre<<endl;
	cout<<"Sexo: "<<alumnos[i_alumno].sexo<<endl;
	cout<<"Edad: "<<alumnos[i_alumno].edad<<endl;
	cout<<"Promedio: "<<prom_alto<<endl;
	
	return 0;
}
