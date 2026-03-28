/*
	Ejercicio 1: Pedir 2 números al usuario y sumarlos, restarlos, multiplicarlos 
	y dividirlos.	
*/

#include<stdio.h>

int main(){
	int a, b, suma=0, resta=0, multiplicacion=0, division=0;
	
	printf("Ingrese el numero de a = ");
	scanf("%i", &a);
	
	printf("Ingrese el numero de b = ");
	scanf("%i", &b);
	
	suma = a + b;
	resta = a - b;
	multiplicacion = a * b; 
	division = a/b;
	
	printf("\nLa suma de a + b es: %i", suma);
	printf("\nLa resta de a - b es: %i", resta);
	printf("\nLa multiplicacion de a * b es: %i", multiplicacion);
	printf("\nLa division de a / b es: %i", division);
	
	return 0;
}
