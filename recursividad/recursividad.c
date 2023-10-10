/*
 * 	Este programa se encaega de realizar una búsqueda lineal de un número
 * 	dado por el usuario dentro de un array ordenado de números enteros por
 * 	medio de una búsqueda lineal, una búsqueda binaria, y una búsqueda recursiva.
 *
 * 	Roger Daniel Piovet García - C15990 - https://github.com/Roger-505
 *
 * 	*/

#include <stdio.h>

// Búsqueda lineal

// Búsqueda binaria

// Búsqueda recursiva

// main

int main () {
	// Declarar variables
	int num;
	int option = -1;
	int array[] = {2, 4, 6, 23, 56, 79};
	
	while (option != 0){
	// Solicitar a usuario por el valor entero a buscar en el array 
	printf("---- Búsqueda de valor dentro de un array ----\n");
	printf("Este programa busca el valor digitado dentro de un conjunto de valores ordenados\n\n");
	printf("Digite el valor que desea buscar:\n");
	scanf("%d", &num);

	// Menú de opciones 
	printf("Escoja una de las siguientes opciones de búsqueda:\n");
	printf("1. Búsqueda lineal\n");
	printf("2. Búsqueda binaria\n");
	printf("3. Búsqueda recursiva\n");
	printf("0. Cerrar programa\n");	
	scanf("%d", &option);
	
	switch (option){
		case 0:
			printf("Cerrando programa...\n");
			break;
		case 1:
			printf("Usted escogió una búsqueda lineal\n");
			break;
		case 2:
			printf("Usted escogió una búsqueda bianria\n");
			break;
		case 3:
			printf("Usted escogió una búsqueda recursiva\n");
			break;	
		default:
			printf("Usted ha digitado una opción incorrecta.\n");
			printf("Por favor, escoja una opción del menú.");
	}
	}
	return 0;
}
