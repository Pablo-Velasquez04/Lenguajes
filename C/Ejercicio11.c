/*
Ejercicio 11: Calcular la cantidad de segundos que están incluidos en el número de horas, 
			  minutos y segundos ingresados por el usuario.
*/

#include<stdio.h>

int main(){
	int horas, th, minutos, tm, seg, total;
	
	printf("Ingrese el numero de horas: ");
	scanf("%i", &horas);
	printf("Ingrese el numero de minutos: ");
	scanf("%i", &minutos);
	printf("Ingrese el numero de segundos: ");
	scanf("%i", &seg);
	
	th = horas * 3600;
	tm = minutos * 60;
	
	total = th+tm+seg;
	printf("\nTotal de segundos es: %i", total);
	
	
	return 0;
}
