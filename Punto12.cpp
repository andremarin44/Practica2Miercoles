#include <iostream>

// Función para verificar si una matriz es un cuadrado mágico
bool esCuadradoMagico(int matriz[3][3]) {
    int sumaFila = 0, sumaColumna = 0, sumaDiagonal1 = 0, sumaDiagonal2 = 0;

    // Calculamos la suma de la primera fila para usar como referencia
    for (int j = 0; j < 3; ++j) {
        sumaFila += matriz[0][j];
    }

    // Verificamos las sumas de filas, columnas y diagonales
    for (int i = 0; i < 3; ++i) {
        int fila = 0, columna = 0;
        for (int j = 0; j < 3; ++j) {
            fila += matriz[i][j];
            columna += matriz[j][i];
            if (i == j) {
                sumaDiagonal1 += matriz[i][j];
            }
            if (i + j == 2) {
                sumaDiagonal2 += matriz[i][j];
            }
        }
        if (fila != sumaFila || columna != sumaFila) {
            return false;
        }
    }

    // Verificamos las sumas de diagonales
    return sumaDiagonal1 == sumaFila && sumaDiagonal2 == sumaFila;
}

int Ejercicio12() {
    int matriz[3][3];

    std::cout << "Ingrese los elementos de la matriz (3x3):" << std::endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cin >> matriz[i][j];
        }
    }

    // Imprimimos la matriz
    std::cout << "Matriz ingresada:" << std::endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Verificamos si es un cuadrado mágico
    if (esCuadradoMagico(matriz)) {
        std::cout << "¡Es un cuadrado mágico!" << std::endl;
    } else {
        std::cout << "No es un cuadrado mágico." << std::endl;
    }

    return 0;
}
