/*
	Ejercicio 8: Defina una estructura que sirva para representar a una persona. La estructura debe contener dos 
				 campos: el nombre de la persona y un valor de tipo lógico que indica si la persona tiene algún 
				 tipo de discapacidad. Realice un programa que dado un vector de personas rellene dos nuevos 
				 vectores: uno que contenga las personas que no tienen ninguna discapacidad y otro que contenga las 
				 personas con discapacidad.
*/

#include<iostream>
using namespace std;

struct Persona{
	char nombre[20];
	bool discapacidad;
}discapacitados[100], noDiscapacitados[100];

int main(){
	int pDisc=0, pNoDisc=0;
	
	Persona pers[] = {
		{"Pablo", false},
		{"Andrea", true},
		{"Otto", false},
		{"Pepe", true}
	};
	
	for(int i=0; i<sizeof(pers)/sizeof(pers[0]); i++){
		if(pers[i].discapacidad == true){
			discapacitados[pDisc] = pers[i];
			pDisc++;
		}else{
			noDiscapacitados[pNoDisc] = pers[i];
			pNoDisc++;
		}
	}
	
	cout<<"\nPersonas Discapacitadas\n";
	for(int i=0; i<pDisc; i++){
		cout<<discapacitados[i].nombre<<endl;
	}
	
	cout<<"\nPersonas No discapacitadas\n";
	for(int i=0; i<pNoDisc; i++){
		cout<<noDiscapacitados[i].nombre<<endl;
	}
	
	return 0;
}
