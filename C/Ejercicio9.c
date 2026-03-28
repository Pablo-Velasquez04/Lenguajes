/*
	Ejercicio 9: Calcular el nuevo salario de un obrero si obtuvo un incremento del 25% sobre su salario anterior.
*/

#include<stdio.h>

int main(){
	float salario = 0, salario_nuevo;
	
	printf("Ingrese su salario actual: ");
	scanf("%f", &salario);
	
	salario_nuevo = salario += salario*0.25;
	
	printf("\nSu nuevo salario es de: $%.2f", salario_nuevo);
	
	return 0;
}
