#include <stdio.h>

int busqueda_recursiva(int array[], int low, int high, int num){
	// Ya que la lista es ordenada, se correrá el algoritmo hasta que 
	// los valores de umbral high y low no sean mayor o igual al otro.
	if (high >= low){

		// Obtener el valor intermedio del conjunto de valores acotado
		// por low y high para la iteración presente
		int mid = low + (high - low) / 2;
		
		// Si el valor intermedio equivale al número que se está buscando,
		// se encontró el valor en el array
		if (array[mid] == num){
			return mid;
		}
		
		// Si el valor que se desea buscar es menor que el valor intermedio,
		// el valor únicamente se puede encontrar en la primera mitad del 
		// conjunto de valores
		if (array[mid] > num){
            return busqueda_recursiva(array, low, mid - 1, num);
		}

		// Por lo contrario, el valor únicamente se puede encontrar en la segunda
		// mitad del conjunto de valores
        return busqueda_recursiva(array, mid + 1, high, num);		
	}
	// Si se llega aquí, significa que el valor no se encuentra en el array.
	return -1;
}

