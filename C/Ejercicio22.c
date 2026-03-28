/*
	Ejercicio 10: Una distribuidora de motocicletas tiene una promoción de fin de año que consiste en lo siguiente. 
	Las motos marca Honda tienen un descuento del 5%, las marcas Yamaha del 8% y las Suzuki del 10%, las otras marcas 2%.
*/ 

#include<stdio.h>

int main(){
	char marca[20];
	float precio, descuento;
	
	printf("Ingrese la marca de la moto: ");
	gets(marca);
	printf("Ingrese el precio de la moto: ");
	scanf("%f", &precio);
	
	if(strcmp(marca, "honda")==0){
		descuento = precio * 0.95;
		printf("Tiene un descuento de 5 por ciento, el precio final es de: %.2f", descuento);
	} else if (strcmp(marca, "yamaha")==0){
		descuento = precio * 0.92;
		printf("Tiene un descuento de 8 por ciento, el precio final es de: %.2f", descuento);
	} else if(strcmp(marca, "suzuki")==0){
		descuento = precio * 0.90;
		printf("Tiene un descuento de 10 por ciento, el precio final es de: %.2f", descuento);
	} else {
		descuento = precio * 0.98;
		printf("Tiene un descuento de 2 por ciento, el precio final es de: %.2f", descuento);
	}
	
	return 0;
}
