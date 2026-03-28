/*
	Ejercicio 1: Comprobar a través de un programa si un alumno aprobó o no un examen (Aprueba si su nota es mayor a 10.5)
*/

#include<stdio.h>

int main(){
	float nota; 
	
	printf("Ingrese su nota: ");
	scanf("%f", &nota);
	
	if ( nota > 10.5){
		printf("Alumno aprobado");
	}
	
	return 0;
}
