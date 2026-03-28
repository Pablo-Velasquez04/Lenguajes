/*
	Ejercicio 5: Hacer un Programa que calcule áreas de trapecios
*/

#include<stdio.h>

int main(){
	float B, b, h, area=0;
	
	printf("Ingrese el valor de las dos bases: ");
	scanf("%f %f", &B, &b);
	printf("Ingrese el valor de la altura: ");
	scanf("%f", &h);
	
	area = ((B+b)/2)*h;
	
	printf("\nEl area del trapecio es: %.2f", area);
	
	
	return 0;
}
