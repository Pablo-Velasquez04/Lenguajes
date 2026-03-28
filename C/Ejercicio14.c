/*
	Ejercicio 14: Comprobar si un numero digitado por el usuario es positivo o negativo
*/

#include<stdio.h>

int main(){
	float numero;
	
	printf("Ingrese un numero: ");
	scanf("%f", &numero);
	
	if(numero>0){
		printf("El numero %.1f es positivo", numero);
	}
	
	if(numero<0){
		printf("El numero %.1f es negativo", numero);
	}
	
	
	return 0;
}
