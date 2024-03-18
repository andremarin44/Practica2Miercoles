#include <iostream>

// Función para llenar la matriz con los números del 1 al 25
void llenarMatriz(int matriz[5][5]) {
    int numero = 1;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            matriz[i][j] = numero++;
        }
    }
}

// Función para imprimir la matriz
void imprimirMatriz(int matriz[5][5]) {
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

// Función para rotar la matriz 90° en sentido horario
void rotarMatriz90(int matriz[5][5]) {
    int temp[5][5];
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            temp[j][4 - i] = matriz[i][j];
        }
    }
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            matriz[i][j] = temp[i][j];
        }
    }
}

int Ejercicio14() {
    int matriz[5][5];

    // Llenamos la matriz con los números del 1 al 25
    llenarMatriz(matriz);

    // Imprimimos la matriz original
    std::cout << "Matriz original:" << std::endl;
    imprimirMatriz(matriz);

    // Rotamos la matriz 90° en sentido horario
    rotarMatriz90(matriz);

    // Imprimimos la matriz rotada 90°
    std::cout << "\nMatriz rotada 90°:" << std::endl;
    imprimirMatriz(matriz);

    // Rotamos la matriz 180° en sentido horario (2 veces 90°)
    rotarMatriz90(matriz);
    rotarMatriz90(matriz);

    // Imprimimos la matriz rotada 180°
    std::cout << "\nMatriz rotada 180°:" << std::endl;
    imprimirMatriz(matriz);

    // Rotamos la matriz 270° en sentido horario (3 veces 90°)
    rotarMatriz90(matriz);

    // Imprimimos la matriz rotada 270°
    std::cout << "\nMatriz rotada 270°:" << std::endl;
    imprimirMatriz(matriz);

    return 0;
}
