#include <iostream>
#include <algorithm>

// Función para calcular la enésima permutación lexicográfica
void calcularPermutacion(int n) {
    int numeros[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    // Calculamos la enésima permutación
    for (int i = 1; i < n; ++i) {
        std::next_permutation(numeros, numeros + 10);
    }

    // Imprimimos la permutación resultante
    std::cout << "La permutación número " << n << " es: ";
    for (int i = 0; i < 10; ++i) {
        std::cout << numeros[i];
    }
    std::cout << std::endl;
}

int Ejercicio18() {
    int n = 1000000;
    calcularPermutacion(n);
    return 0;
}
