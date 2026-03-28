/*
	Ejercicio 6: Ingrese un número y calcule e imprima su raíz cuadrada. Si el numero es negativo imprima el número y 
				 un mensaje que diga “tiene raíz imaginaria”
*/

#include<stdio.h>
#include<math.h>


int main(){
	float num, raiz; 
	
	printf("Ingese un numero: ");
	scanf("%f", &num);
	
	if(num < 0) {
		printf("El numero %.2f tiene raiz imaginaria", num);
	} else {
		raiz = sqrt(num);
		printf("La raiz del numero %.2f es: %.2f", num, raiz);
	}
	
	
	
	return 0;
}
