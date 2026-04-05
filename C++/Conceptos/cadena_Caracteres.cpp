//Cadena de caracteres

#include<iostream>
#include<string.h>

using namespace std;

int main(){
	char palabra[] = "Pablo";
	char palabra2[] ={'P', 'a', 'b', 'l', 'o',};
	char nombre[30];
	
	cout<<"Digita tu nombre: "; 
	cin.getline(nombre, 20, '\n');
	
	cout<<nombre<<endl;
	
	return 0;
}
