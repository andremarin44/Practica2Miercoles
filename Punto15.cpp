#include <iostream>
#include <algorithm> // Para usar las funciones min() y max()

struct Rectangle {
    int x, y; // Coordenadas de la esquina superior izquierda
    int width, height; // Ancho y altura
};

// Función para encontrar la intersección entre dos rectángulos
Rectangle findIntersection(const Rectangle& A, const Rectangle& B) {
    int x5 = std::max(A.x, B.x);
    int y5 = std::max(A.y, B.y);
    int x6 = std::min(A.x + A.width, B.x + B.width);
    int y6 = std::min(A.y + A.height, B.y + B.height);

    // Verificar si hay intersección
    if (x5 >= x6 || y5 >= y6) {
        // No hay intersección, devolver un rectángulo degenerado
        return {0, 0, 0, 0};
    }

    // Calcular las coordenadas del rectángulo intersección
    return {x5, y5, x6 - x5, y6 - y5};
}

int Ejercicio15() {
    // Ejemplo con los rectángulos A y B
    Rectangle A = {0, 0, 8, 4};
    Rectangle B = {5, 2, 6, 7};

    Rectangle C = findIntersection(A, B);

    std::cout << "Rectángulo intersección C: {" << C.x << ", " << C.y << ", " << C.width << ", " << C.height << "}\n";

    return 0;
}
