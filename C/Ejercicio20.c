/*
	Ejercicio 8: Ingresar por teclado el nombre, la edad y el sexo de cualquier persona e imprima, solo si la persona 
				 es de sexo masculino y mayor de edad, el nombre de la persona.
*/

#include<stdio.h>

int main(){
	char nombre[30], sexo[20];
	int edad;
	
	printf("Ingrese su nombre: ");
	gets(nombre);
	printf("Ingrese su sexo: ");
	gets(sexo);
	printf("Ingrese su edad: ");
	scanf("%i", &edad);
	
	if((strcmp(sexo, "masculino")==0) && edad >= 18){
		printf("Es de sexo masculino y mayor de edad (%i años) con nombre: %s", edad, nombre);
	} else{
		printf("Es de sexo %s y con edad %i años", sexo, edad);
	}
	
	
	return 0;
}
