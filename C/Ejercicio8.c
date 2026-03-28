/*
	Ejercicio 8: Dadas las horas trabajadas de una persona y el valor por hora. Calcular su salario e imprimirlo
*/

#include<stdio.h>

int main(){
	int horas;
	float valorxhora, salario;
	
	printf("Ingrese el valor por hora: ");
	scanf("%f", &valorxhora);
	printf("Ingrese las horas trabajadas: ");
	scanf("%i", &horas);
	
	salario = valorxhora * horas;
	
	printf("\nSu salario final es de: $%.2f", salario);
	
	return 0;
}
