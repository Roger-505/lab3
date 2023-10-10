void encontrarMinMaxPtrs(int* array, int* min, int* max, int size){
	// Asignar a *max y *min los valores dereferenciados de array 
	*max = *array;
	*min = *array;
	
	// Recorrer todo el array para encontrar valores maximos y minimos
	for (int i = 1 ; i < size ; i++){
		// Las posiciones en memoria del arreglo son contiguas. De esta manera,
		// es posible recorrer el array sumando el índice i a la dirección array
		if (*(array + i) > *max){
			*max = *(array + i);
		}
		// Para encontrar el valor mínimo, se realiza un procedimiento similar 
		// en comparación a encontrar el valor máximo.
		if (*(array + i) < *min){
			*min = *(array + i);
		}
	}
}
