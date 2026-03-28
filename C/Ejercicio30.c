// Ejercicio 2: Digite un número, si el numero supera a 10, multiplique los 10 primeros números, sino, súmelos

#include<stdio.h>

int main(){
	int cont, n, sum=0, mult=1;
	
	printf("Ingrese el numero: ");
	scanf("%i", &n);
	
	cont = 1;
	
	if(n>10){
		while(cont <= 10){
			mult *= cont;
			cont++;
		}
		printf("La multiplicacion es: %i", mult);
	} else {
		while(cont <= 10){
			sum += cont;
			cont++;
		}
		printf("La suma es: %i", sum);
	}
	
	
	return 0;
}
