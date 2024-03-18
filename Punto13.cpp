#include <iostream>

// Función para verificar si un elemento representa una estrella
bool esEstrella(int a, int b, int c, int d, int e) {
    return (a + b + c + d + e) / 5 > 6;
}

// Función para contar el número de estrellas en la matriz
int contarEstrellas(int* matriz, int filas, int columnas) {
    int contador = 0;

    // se ignora las posibles estrellas en los bordes de la matriz tal como lo dice la guia
    for (int i = 1; i < filas - 1; ++i) {
        for (int j = 1; j < columnas - 1; ++j) {
            if (esEstrella(matriz[i * columnas + j], matriz[i * columnas + j - 1],
                           matriz[i * columnas + j + 1], matriz[(i - 1) * columnas + j],
                           matriz[(i + 1) * columnas + j])) {
                contador++;
            }
        }
    }

    return contador;
}

int main() {
    int matriz[6][8] = {
        {0, 3, 4, 0, 0, 0, 6, 8},
        {5, 13, 6, 0, 0, 0, 2, 3},
        {2, 6, 2, 7, 3, 0, 10, 0},
        {0, 0, 4, 15, 4, 1, 6, 0},
        {0, 0, 7, 12, 6, 9, 10, 4},
        {5, 0, 6, 10, 6, 4, 8, 0}
    };

    int filas = 6;
    int columnas = 8;

    int estrellas = contarEstrellas(&matriz[0][0], filas, columnas);

    std::cout << "Número de estrellas encontradas: " << estrellas << std::endl;

    return 0;
}
