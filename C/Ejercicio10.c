/*
	Ejercicio 10: Un alumno desea saber cuál será su calificación final en la materia de Algoritmos. 
				  Dicha calificación se compone de los siguientes porcentajes:

	• 55% del promedio de sus tres calificaciones parciales.
	• 30% de la calificación del examen final.
	• 15% de la calificación de un trabajo final.
*/

#include<stdio.h>

int main(){
	float nt1, nt2, nt3, promedio, nParciales, ntef, nExamenFinal, ntf, nTrabFinal, notaFinal;
	
	printf("Ingrese sus 3 notas de examenes: ");
	scanf("%f %f %f", &nt1, &nt2, &nt3);
	
	printf("Ingrese su nota de examen final: ");
	scanf("%f", &ntef);
	
	printf("Ingrese su nota de trabajo final: ");
	scanf("%f", &ntf);
	
	promedio = (nt1+nt2+nt3)/3;
	nParciales = promedio*0.55;
	
	nExamenFinal = ntef * 0.30;
	
	nTrabFinal = ntf * 0.15;
	
	notaFinal = nParciales+nExamenFinal+nTrabFinal;
	
	printf("\nNota de examenes parciales: %.2f",nParciales);
	printf("\nNota de examen final: %.2f", nExamenFinal);
	printf("\nNota trabajo final: %.2f\n", nTrabFinal);
	
	printf("\nCalificacion final del curso: %.2f pts", notaFinal);
	 
	return 0;
}
