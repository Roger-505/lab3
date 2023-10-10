int busqueda_lineal(int array[], int size, int num){
	// Ya que la lista es ordenada, se correrá el algoritmo hasta que se
	// alcance el final de la lista.
	for (int i = 0 ; i < size ; i++){
		if (array[i] == num){
			return i;
		} 
	}
	// Si se llega aquí, significa que el valor no se encuentra en el array.
	return -1;
}

