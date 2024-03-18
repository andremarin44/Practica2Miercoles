#include <iostream>
#include <string>

// Función que convierte un entero a una cadena de caracteres
void intToString(int num, std::string& result) {
    result = std::to_string(num);
}

int Ejercicio5() {
    int numero = 123;
    std::string cadena;

    // Llama a la función para convertir el número
    intToString(numero, cadena);

    // imprime la cadena resultante
    std::cout << "Número convertido a cadena: " << cadena << std::endl;

    return 0;
}
