// Ejercicio 5: Hacer un programa que determine si una palabra es polínfroma

#include<iostream>
#include<string.h>

using namespace std;

int main(){
	char cad1[30], cad2[30];
	
	cout<<"Digite una palabra polindroma: "; cin.getline(cad1, 30);
	
	strcpy(cad2, cad1);
	
	if(strcmp(cad1, strrev(cad2)) == 0){
		cout<<"Esta palabra si es polindroma"<<endl;
	} else {
		cout<<"Esta palabra NO es polindorma, por favor verifique la palabra"<<endl;
	}
	
	return 0;
}
