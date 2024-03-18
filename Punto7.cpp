#include <iostream>
#include <string>

// Función que elimina caracteres repetidos de una cadena
std::string removeDuplicates(const std::string& input) {
    std::string result;

    for (char c : input) {
        if (result.find(c) == std::string::npos) {
            // Si el carácter no está en la cadena resultante, lo añadimos
            result += c;
        }
    }

    return result;
}

int Punto7() {
    std::string original = "bananas";
    std::string sinRepetidos = removeDuplicates(original);

    std::cout << "Original: " << original << std::endl;
    std::cout << "Sin repetidos: " << sinRepetidos << std::endl;

    return 0;
}
