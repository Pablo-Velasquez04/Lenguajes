/* Ejercicio 16: Hacer un menú que considere las siguientes opciones:
	caso 1: Cubo de un numero
	caso 2: Numero par o impar
	case 3: salir 
*/

#include<stdio.h>
#include<math.h>

int main(){
	int opcion, numero, cubo, result;
	
	printf("\tMenu para el cubo de un numero o si es par o impar");
	printf("\n1. Cubo de un numero");
	printf("\n2. Numero par o impar");
	printf("\n3. Salir");
	printf("\nIngrese la opcion: ");
	scanf("%i", &opcion);
	
	switch(opcion){
		case 1: printf("\nIngrese el numero: ");
				scanf("%i", &numero);
				cubo = pow(numero, 3);
				printf("El cubero de %i es: %i", numero, cubo);
		break;
		case 2: printf("\nIngrese el numero: ");
				scanf("%i", &numero);
				result = numero % 2;
				if(result == 0){
					printf("El numero %i es PAR", numero);
				} else {
					printf("El numero %i es IMPAR", numero);
				}
		case 3: printf("\nSaliendo...\n");
		break;
		default: printf("Opcion no valida");
	}
	
	return 0; 
}
