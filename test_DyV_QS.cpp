#include <iostream>
#include <vector>
#include <chrono>
#include <cstdlib>
#include "DyV_QS.h"

void printVector(const std::vector<int>& vec) {
    for (const int& val : vec) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
}

std::vector<int> generarVector(int tamaño) {
    std::vector<int> vec(tamaño);
    for (int i = 0; i < tamaño; ++i) {
        vec[i] = std::rand() % 1000;
    }
    return vec;
}

int main() {
    const int tamaño = 10;

    std::vector<int> vec = generarVector(tamaño);

    std::cout << "Vector before sorting: ";
    printVector(vec);

    auto start = std::chrono::system_clock::now();
    QuickSort(vec, 0, vec.size() - 1); // Call QuickSort from the header file
    auto end = std::chrono::system_clock::now();
    
    std::cout << "Vector after sorting: ";
    printVector(vec);

    std::chrono::duration<float, std::milli> duration = end - start;
    std::cout << "Time for QuickSort (last element as pivot): " << duration.count() << " ms" << std::endl;

    return 0;
}
