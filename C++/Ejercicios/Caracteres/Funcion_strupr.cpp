//Pasar una palabra a MAYUSCULA - Función strupr()

#include<iostream>
#include<string.h>

using namespace std;

int main(){
	char palabra[] = "pablo";
	
	strupr(palabra);
	
	cout<<palabra<<endl;
	
	return 0;
}
