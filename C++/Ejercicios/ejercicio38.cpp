/*
Ejercicio 14: En una clase de 5 alumnos se han realizado tres exámenes y se requiere determinar el número de: 
	 a) Alumnos que aprobaron todos los exámenes.
	 b) Alumnos que aprobaron al menos un examen.
	 c) Alumnos que aprobaron únicamente el último examen.
 
  Realice un programa que permita la lectura de los datos y el cálculo de las estadísticas.
*/

#include<iostream>

using namespace std;

int main(){
	int n1, n2, n3, aprobados=0, unExamen=0, ultimoExamen=0;
	
	for(int i=1; i<=5; i++){
		cout<<"--------Alumno "<<i<<" --------";
		cout<<"\nDigite sus 3 notas: "; cin>>n1>>n2>>n3;
		
		if(n1 >= 7 && n2 >= 7 && n3 >= 7){
			aprobados++;
		} else if(n1 >= 7 || n2 >= 7 || n3 >= 7){
			unExamen++;
			if(n1 < 7 && n2 < 7 && n3 >= 7){
				ultimoExamen++;
			}
		}
	}
	
	cout<<"\nResultados: \n"<<endl;
	cout<<"Alumnos que aprobaron todos los examenes: "<< aprobados<< endl;
	cout<<"Alumnos que aprobaron al menos un examen: "<< unExamen<< endl;
	cout<<"Alumnos que aprobaron unicamente el ultimo examen: "<< ultimoExamen<< endl;
	return 0;
}
