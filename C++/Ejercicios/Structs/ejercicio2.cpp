/*
	Ejercicio 2: Hacer una estructura llamada alumno, en la cual se tendrán los siguientes Campos: Nombre, edad, 
			     promedio, pedir datos al usuario para 3 alumnos, comprobar cuál de los 3 tiene el mejor promedio 
				 y posteriormente imprimir los datos del alumno.
*/

#include<iostream>
using namespace std;

struct alumno{
	char nombre[20];
	int edad;
	double promedio;
}alumnos[3];

int main(){
	int alumnoGanador=0;
	double mejorPromedio=0;
	
	for(int i=0; i<3; i++){
		fflush(stdin);
		cout<<"Digite los datos del alumno "<<(i+1)<<endl;
		cout<<"Nombre: "; cin.getline(alumnos[i].nombre, 20, '\n');
		cout<<"Edad: "; cin>>(alumnos[i].edad);
		cout<<"Promedio: "; cin>>(alumnos[i].promedio);
		
		if(alumnos[i].promedio > alumnos[alumnoGanador].promedio){
			alumnoGanador = i; 
		}
	}
	
	cout<<"\nDatos del alumno con mejor promedio"<<endl;
	cout<<"Nombre: "<<alumnos[alumnoGanador].nombre<<endl;
	cout<<"Edad: "<<alumnos[alumnoGanador].edad<<endl;
	cout<<"Promedio: "<<alumnos[alumnoGanador].promedio<<endl;
	
	return 0;
}
