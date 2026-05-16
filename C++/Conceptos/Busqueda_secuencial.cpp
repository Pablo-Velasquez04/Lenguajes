//Busqueda secuencial

#include<iostream>;

using namespace std;

int main(){
	int a[] = {3, 4, 2, 1, 5};
	int i=0, dato;
	char band = 'F';
	
	dato = 4;
	while((band == 'F') && (i<5)){
		if(a[i] == dato){
			band = 'V';
		}
		i++;
	}
	
	if(band == 'F'){
		cout<<"El numero a buscar no existe en el arreglo";
	} else if(band == 'V'){
		cout<<"El numnero a sido encontrado en la posicion: "<<i-1<<endl;
	}
	
	
	return 0;
}
