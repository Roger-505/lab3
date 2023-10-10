// Incluir header con definición de struct maxmin
#include "punteros.h"

// Declarar struct 
Struct result;

Struct encontrarMinMax(int array[], int size)
{
	// Definir valores iniciales de max y min
	result.max = array[0];
	result.min = array[0];
	
	// Analizar a array completo sin punteros
	for (int i = 1 ; i < size ; i++){
		// Si el elemento en el indice i es mayor que result.max,
		// se convierte en el nuevo valor de result.max
		if (array[i] > result.max) {
			result.max = array[i];
		}
		// Se realiza lo mismo para el valor mínimo, ahora 
		// verificadndo si array[i] es menor a result.min
		if (array[i] < result.min) {
			result.min = array[i];
		}
	}
	return result;
}

