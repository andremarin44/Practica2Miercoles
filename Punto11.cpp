#include <iostream>
using namespace std;

// Representación de la sala de cine
const char ASIENTO_DISPONIBLE = '-';
const char ASIENTO_RESERVADO = '+';

// Tamaño de la sala
const int FILAS = 15;
const int ASIENTOS_POR_FILA = 20;

// Matriz para almacenar el estado de los asientos
char sala[FILAS][ASIENTOS_POR_FILA];

// Inicializar la sala con asientos disponibles
void inicializarSala() {
    for (int fila = 0; fila < FILAS; ++fila) {
        for (int asiento = 0; asiento < ASIENTOS_POR_FILA; ++asiento) {
            sala[fila][asiento] = ASIENTO_DISPONIBLE;
        }
    }
}

// Función para mostrar la sala
void mostrarSala() {
    cout << "Estado de la sala:" << endl;
    for (int fila = 0; fila < FILAS; ++fila) {
        for (int asiento = 0; asiento < ASIENTOS_POR_FILA; ++asiento) {
            cout << sala[fila][asiento] << " ";
        }
        cout << endl;
    }
}

// Función para reservar un asiento
void reservarAsiento(int fila, int asiento) {
    if (fila >= 0 && fila < FILAS && asiento >= 0 && asiento < ASIENTOS_POR_FILA) {
        if (sala[fila][asiento] == ASIENTO_DISPONIBLE) {
            sala[fila][asiento] = ASIENTO_RESERVADO;
            cout << "Asiento reservado exitosamente." << endl;
        } else {
            cout << "El asiento ya está reservado." << endl;
        }
    } else {
        cout << "Fila o número de asiento inválido." << endl;
    }
}

int Ejercicio11() {
    char fila;
    int numeroAsiento;

    inicializarSala();
    mostrarSala();

    cout << "Ingrese la fila (A-O): ";
    cin >> fila;
    fila = toupper(fila) - 'A'; // Convertir a índice de fila (0-14)

    cout << "Ingrese el número de asiento (1-20): ";
    cin >> numeroAsiento;
    --numeroAsiento; // Convertir a índice de asiento (0-19)

    reservarAsiento(fila, numeroAsiento);

    mostrarSala();

    return 0;
}
