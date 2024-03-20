#include <iostream>

// Función para calcular el factorial
int factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    }
    return num * factorial(num - 1);
}

// Función para encontrar el número de caminos posibles en una cuadrícula de nxn
int Encontrarcamino(int n) {
    int numerator = factorial(2 * n);
    int denominator = factorial(n) * factorial(n);
    return numerator / denominator;
}

int Ejercicio16() {
    int n;
    std::cout << "Ingrese el valor de n: ";
    std::cin >> n;

    int numcamino = Encontrarcamino(n);
    std::cout << "Para una cuadrícula de " << n << "x" << n << " puntos hay " << numcamino << " caminos.\n";

    return 0;
}
