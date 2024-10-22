#include <vector>
#include <cstdio>

template <typename T> T BusquedaBinaria(T X, std::vector<T> a, int ini, int fin) {
	if (ini > fin) {
		printf("No se encuentra en el array");
	}
	int medio = (ini + fin) / 2;
	if (a[medio] == X) {
		return medio;
	} else if (a[medio] > X) {
		return BusquedaBinaria(X, a, ini, medio-1);
	} else {
		return BusquedaBinaria(X, a, medio+1, fin);
	}
}

