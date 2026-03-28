/*
	Ejercicio 3: Sacar la hipotenusa de un triángulo rectángulo, pidiendo al usuario el valor de los 2 catetos.	
*/

#include<stdio.h>
#include<math.h>

int main(){
	float a=0, b=0, c = 0;
	
	printf("Igrese el cateto a: ");
	scanf("%f", &a);
	printf("Ingrese el cateto b: ");
	scanf("%f", &b);
	
	c = sqrt(pow(a, 2) + pow(b, 2));
	printf("\nEl valor de la hipotenusa c es: %.2f", c); 
	
	return 0;
}
