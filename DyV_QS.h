#include <vector>

template <typename T>
void intercambiar(std::vector<T>& vec, int a, int b) {
    T aux = vec[a];
    vec[a] = vec[b];
    vec[b] = aux;
}

template <typename T>
int Partition(std::vector<T>& a, int ini, int fin) {
    T x = a[fin];
    int i = ini;
    for (int j = ini; j < fin; j++) {
        if (a[j] <= x) {
            intercambiar(a, i, j);
            i++;
        }
    }
    intercambiar(a, i, fin);
    return i;
}

template <typename T>
void QuickSort(std::vector<T>& a, int ini, int fin) {

    if (ini < fin) {
        int pivot = Partition(a, ini, fin);
        QuickSort(a, ini, pivot - 1);
        QuickSort(a, pivot + 1, fin);
    }
}