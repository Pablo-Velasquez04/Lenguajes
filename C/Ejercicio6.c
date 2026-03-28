/*
	Ejercicio 6: Calcule la media aritmética de 3 números cualesquiera
*/

#include<stdio.h>

int main(){
	float a, b, c, result;
	
	printf("Ingrese 3 numeros: ");
	scanf("%f %f %f", &a, &b, &c);
	
	result = (a+b+c)/3;
	
	printf("\nEl resultado de la media aritmetica es: %.2f", result);
	
	return 0;
}
