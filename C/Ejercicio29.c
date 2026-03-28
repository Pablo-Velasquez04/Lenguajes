// 1. Suma de los n primeros numeros

#include<stdio.h>

int main(){
	int cont, n, suma=0;
	
	printf("Digite el total de numeros a sumar: ");
	scanf("%i", &n);
	
	cont = 1;
	
	while(cont <= n){
		suma += cont;
		cont++;
	}
	
	printf("\nLa suma es : %i", suma);
	
	
	return 0;
}
