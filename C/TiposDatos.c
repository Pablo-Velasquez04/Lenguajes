//Tipos de Datos

#include<stdio.h>

int main(){
	char a = 'e'; //Tamaño = 1 byte  Rango: 0..255
	short b = -15;  //Tamaño = 2 bytes  Rango: -128..127
	int c = 1024;  //Tamaño = 2 bytes  Rango: -32768..32767
	unsigned int d = 128;  //Tamaño = 2 bytes  Rango: 0..65535
	long e = 123456;  //Tamaño = 4 bytes 
	float f = 15.678;  //Tamaño = 4 bytes
	double m = 1232324.123223;  //Tamaño = 8 bytes
	
	printf("El elemento es: %lf", m);
	
	return 0;
}
