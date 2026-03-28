/*
Ejercicio 11: Dada una nota de un examen mediante un código escribir el literal que le corresponde a la nota.

A - Excelente
B - Notable
C - Aprobado
D y F - Reprobado
*/

#include<stdio.h>

int main(){
	char nota;
	
	printf("Digite la nota: ");
	scanf("%c", &nota);
	
	switch(nota){
		case 'A': printf("Excelente"); break;
		case 'B': printf("Notable"); break;
		case 'C': printf("Aprobado"); break;
		case 'D':
		case 'F': printf("Reprobado"); break;
		default: printf("Se equivoco de nota");
	}
	
	
	return 0;
}
