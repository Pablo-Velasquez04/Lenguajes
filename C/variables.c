//Directivas del Preprocesador y Variables

//Librerias
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

#define PI 3.1416 //Macro

int y = 5;  //Variable Global

int main(){
	int x = 10;  //Variable Local
	
	float suma = 0;
	
	suma = PI + x;
	
	printf("La suma es: %.2f", suma);
	
	return 0;
}
