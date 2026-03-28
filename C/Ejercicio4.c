/*
	Ejercicio 4: Hacer un Programa que calcule longitudes de Circunferencia. (Propuesto).
*/

#include<stdio.h>
#include<math.h>
#define _USE_MATH_DEFINES  //para M_PI (pi=3.14159...)

int main(){
	double r=0, c=0;
	
	printf("Ingrese el valor del radio r: ");
	scanf("%lf", &r);
	
	c = 2*M_PI*r;
	printf("\nEl perimetro del circulo es: %.3lf", c);
	
	return 0;
}
