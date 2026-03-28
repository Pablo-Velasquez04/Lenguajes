/* La sentencia while

	Sintaxis:
		while(condicion){
			instrucciiones;
	}
*/
// Mostrar los 10 primeros i¿numeros en pantalla - ascendente
// Mostrar los 10 primeros i¿numeros en pantalla - descendente

#include<stdio.h>


int main(){
	int i, j;
	
	i=1;
	j=10;
	
	while(i<=10){
		printf("%i\n", i);
		i++;
	}
	
	while(j>=1){
		printf("%i\n", j);
		j--;
	}
	
	
	return 0;
}
