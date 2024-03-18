#include <iostream>
#include <string>

// Función que separa números y caracteres en dos cadenas
void separateNumbersAndText(const std::string& input, std::string& text, std::string& numbers) {
    for (char c : input) {
        if (std::isdigit(c)) {
            // Si es un número, lo agregamos a la cadena de números
            numbers += c;
        } else {
            // Si no es un número, lo agregamos a la cadena de texto
            text += c;
        }
    }
}

int Ejercicio8() {
    std::string original = "abc54rst";
    std::string texto, numeros;

    // Llamamos a la función para separar los números y el texto
    separateNumbersAndText(original, texto, numeros);

    // Imprimimos los resultados
    std::cout << "Original: " << original << std::endl;
    std::cout << "Texto: " << texto << std::endl;
    std::cout << "Número: " << numeros << std::endl;

    return 0;
}
