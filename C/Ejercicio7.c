/*
	
	Ejercicio 7: Una tienda ofrece un descuento del 15% sobre el total de la 
				 compra y un cliente desea saber cuánto deberá pagar finalmente por su compra.
*/

#include<stdio.h>

int main(){
	float total = 0, totalF = 0; 
	
	printf("Ingrese el total de la compra: ");
	scanf("%f", &total);
	
	totalF = total -= (total * 0.15);
	
	
	printf("El total con el 15 porc. de descuento es de: $%.2f", totalF);
	
	return 0;
}
