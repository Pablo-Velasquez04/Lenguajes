/* Expresion Condicional: El operador '?'
Sintaxis: 
	
	Condicion ? Expresion1: Expresion2
*/

//Numero par

#include<stdio.h>

int main(){
	int numero; 
	
	printf("Ingrese un numero: ");
	scanf("%i", &numero);
	
	(numero%2 == 0) ? printf("El numero es PAR") : printf("El numero es IMPAR"); 
	
	
	return 0;
}
