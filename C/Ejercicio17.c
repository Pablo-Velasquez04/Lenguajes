/*
	Ejercicio 16: Calcular el mayor de dos números leídos del teclado y visualizarlo en pantalla.
*/

#include<stdio.h>

int main(){
	int n1, n2; 
	
	printf("Ingrese dos numeros: ");
	scanf("%i %i", &n1, &n2);
	
	if(n1>n2){
		printf("El numero mayor es: %i", n1);
	} else if(n1==n2){
		printf("Ambos numeros son iguales");
	} else {
		printf("El numeromayor es: %i", n2);
	}
	
	return 0;
}

