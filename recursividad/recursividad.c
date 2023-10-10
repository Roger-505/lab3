/*
 * 	Este programa se encaega de realizar una búsqueda lineal de un número
 * 	dado por el usuario dentro de un array ordenado de números enteros por
 * 	medio de una búsqueda lineal, una búsqueda binaria, y una búsqueda recursiva.
 *
 * 	Roger Daniel Piovet García - C15990 - https://github.com/Roger-505
 *
 * 	*/

#include <stdio.h>

//Incluir header
#include "recursividad.h"


// main

void main () {
	// Declarar variables
	int num;
	int option = -1;
	int array[] = {2, 4, 6, 23, 56, 79};
	int size = sizeof(array) / sizeof(array[0]);
	
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
	printf("3. Búsqueda binaria recursiva\n");
	printf("0. Cerrar programa\n");	
	scanf("%d", &option);
	
	int result;
	switch (option){
		case 0:
			printf("Cerrando programa...\n");
			break;
		case 1:
			printf("Usted escogió una búsqueda lineal\n");
			printf("Realizando búsqueda...\n");
			// Realizar la búsqueda lineal.
			result = busqueda_lineal(array, size, num);

			// Se obtiene la  posiciñon del valor (si se encontró) y se imprime 
			// el resultado de la búsqueda
			if (result != -1){
				printf("Se encontrò el valor %d en la posición %d del conjunto de valores\n\n", num, result);
			}
			else if (result == -1){
				printf("No se encontró el valor %d en el conjunto de valores\n\n", num);
			}
			break;
		case 2:
			printf("Usted escogió una búsqueda binaria\n");
			printf("Realizando búsqueda...\n");
			// Realizar la búsqueda binaria. Se inicia con los índices
			// de umbral y size - 1 para recorrer todo el array
			result = busqueda_binaria(array, 0, size - 1, num);

			// Se obtiene la  posiciñon del valor (si se encontró) y se imprime 
			// el resultado de la búsqueda
			if (result != -1){
				printf("Se encontrò el valor %d en la posición %d del conjunto de valores\n\n", num, result);
			}
			else if (result == -1){
				printf("No se encontró el valor %d en el conjunto de valores\n\n", num);
			}
			break;
		case 3:
			printf("Usted escogió una búsqueda binaria recursiva\n");
			printf("Realizando búsqueda...\n");
			// Realizar la búsqueda binaria recursiva. Se inicia con los índices
			// de umbral 0 y size - 1 para recorrer todo el array
			result = busqueda_recursiva(array, 0, size - 1, num);

			// Se obtiene la posiciñon del valor (si se encontró) y se imprime 
			// el resultado de la búsqueda
			if (result != -1){
				printf("Se encontrò el valor %d en la posición %d del conjunto de valores\n\n", num, result);
			}
			else if (result == -1){
				printf("No se encontrò el valor %d en el conjunto de valores\n\n", num);
			}
			break;	
		default:
			printf("Usted ha digitado una opción incorrecta.\n");
			printf("Por favor, escoja una opción del menú.\n");
	}
	}
}
