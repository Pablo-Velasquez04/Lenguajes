/* 
	Ejercicio 2: Convertir Grados Celsius a Grados Fahrenheit (Propuesto).
*/

#include<stdio.h>

int main(){
	float c= 0, f=0;
	
	printf("Ingrese los grados Celcius: ");
	scanf("%f", &c);
	
	f = (c*1.8)+32;
	printf("\nEl resultado es: %.2f", f);
	
	
	return 0;
}
