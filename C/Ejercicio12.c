/*
	Ejercicio 12: Hacer un programa que obtenga la media geométrica de tres números.
*/

#include<stdio.h>
#include<math.h>

int main(){
	float a, b, c, media;
	
	printf("Ingrese los 3 numeros: ");
	scanf("%f %f %f", &a, &b, &c);
	
	media = cbrt(a*b*c);
	
	printf("La media geométrica es: %.2f", media);	
	
	return 0;
}
