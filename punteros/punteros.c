/*
 * Este programa obtiene el valor mínimo y máximo de un arreglo
 * por medio de dos funciones, una que utiliza punteros y otra que 
 * no los utiliza.
 *
 * Roger Daniel Piovet Garcia - C15990 -  https://github.com/Roger-505
 */

#include <stdio.h>

// Incluir header

#include "punteros.h"

// Declarar struct para recibir valores máximos y mínimos
Struct ret;

// main

void main() {
	// Definir variables
	int array[] = {21, 24, 65, 3, 56, 12, 35, 15};
	int size = sizeof(array) / sizeof(array[0]);
	int option = -1;
	
	// Menú de opciones
	while (option != 0){
		printf("\n---- Búsqueda de valor máximo y mínimo dentro de un array ----\n");
		printf("Este programa busca el valor máximo y mínimo dentro de un arreglo.\n");
		printf("Escoja una de las siguientes opciones:\n");
		printf("1. Búsqueda por medio de punteros\n");
		printf("2. Búsqueda sin punteros\n");
		printf("0. Cerrar prgrama\n");
		scanf("%d", &option);
		
		switch (option){
			case 0:
				printf("Cerrando programa...\n");
				break;
			case 1:
				printf("Usted ha escogido una búsqueda por medio de punteros.\n");
				printf("Realizando búsqueda...\n");
				
				// Inicializar valores minimos y maximos que se utilizarán para obtener
				// puntero 
				int min, max;

				// Realizar búsqueda de valores máximo y mínimo del array con punteros
				encontrarMinMaxPtrs(array, &min, &max, size);

				// Se obtienen los valores máximos y mínimos del array y se imprimen
				printf("Los valores máximos y mínimos del array son:\n");
				printf("Máximo: %d\n", max);
				printf("Mínimo: %d\n", min);
				break;
			case 2:
				printf("Usted ha escogido una búsqueda sin punteros.\n");
				printf("Realizando búsqueda...\n");
				// Realizar búsqueda de valores máximo y mínimo del array sin punteros
				ret = encontrarMinMax(array, size); 

				// Se obtienen los valores máximos y mínimos del array y se imprimen
				printf("Los valores máximos y mínimos del array son:\n");
				printf("Máximo: %d\n", ret.max);
				printf("Mínimo: %d\n", ret.min);
				break;
			default:
				printf("Usted ha digitado una opción incorrecta\n");
				printf("Por favor, escoja una de las opciones del menú.\n");
		}
	}
}
