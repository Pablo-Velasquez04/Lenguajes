//Entradas y Salidas

#include<stdio.h>

int main(){
	char x[50];  //Variable de tipo char, solo que con 50 espacios
	printf("Digite su nombre: ");
	scanf("%s", x);  //Perjudicial si se ingresa un espacio, solo lee asta donde halla un epacio "Pablo Velasquez" Salida: Pablo
	gets(x);  //Optimó para leer con espacios "Pablo Velasquez"  Salida: Pablo Velasquez <- todo completo, Bien.
	printf("Su nombre es: %s", x);
	
	return 0;
}
