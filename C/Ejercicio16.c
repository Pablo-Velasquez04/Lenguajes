/*
	Ejercicio 4: Determinar si un número es par, impar.
*/

#include<stdio.h>

int main(){
	int numero;
	
	printf("Ingrese un numero: ");
	scanf("%i", &numero);
	
	if(numero % 2 == 0){
		printf("El numero %i es PAR", numero);
	}
	
	if(numero % 2 != 0){
		printf("El numero %i es IMPAR", numero);
	}
	
	return 0;
}
