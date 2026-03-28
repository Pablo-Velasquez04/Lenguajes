/*
Ejercicio 12: Seleccionar un tipo de vehículo e indicar el peaje a pagar según un valor numérico
	1 - turismo, peaje = $500.
	2 - autobus, peaje = $3000.
	3 - motocicleta, peaje = $300.
	caso contrario - Vehiculo no autorizado.
*/

#include<stdio.h>

int main(){
	int num; 
	
	printf("Seleccione el tipo de vehiculo, segun el numero: ");
	printf("\n1 - turismo");
	printf("\n2 - autobus");
	printf("\n3 - motocicleta");
	printf("\nEliga el tipo de vehiculo: ");
	scanf("%i", &num);
	
	switch(num){
		case 1: printf("Peaje = $500"); break;
		case 2: printf("Peaje = $3000"); break;
		case 3: printf("Peaje = $300"); break;
		default: printf("Opcion no valida, vehiculo no autorizado");
	}
	
	
	return 0;
}
