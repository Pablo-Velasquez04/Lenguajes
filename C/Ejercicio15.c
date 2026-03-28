/*
	Ejercicio 15: Visualizar la tarifa de la luz según el gasto de corriente eléctrica. 
				Para un gasto menor de 1.000Kwxh la tarifa es 1.2, entre 1.OOOy 1.850Kwxh es 1.0 y mayor de 1.85OKwxh 0.9.
*/

#include<stdio.h>

int main(){
	int gastoLuz;
	float tarifa;
	
	printf("Ingrese el gasto Kwxh: ");
	scanf("%i", &gastoLuz);
	
	if(gastoLuz < 1000){
		tarifa = 1.2;
	}
	
	if(gastoLuz >= 1000 && gastoLuz <= 1850){
		tarifa = 1;
	}
	
	if(gastoLuz > 1850){
		tarifa = 0.9;
	}
	
	printf("El total a pagar es (tarifa): %.1f", tarifa);
	
	return 0;
}
