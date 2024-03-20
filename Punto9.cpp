#include <iostream>
#include <string>
using namespace std;

int Ejercicio9() {
    int n;
    cout << "Ingrese el valor de n: ";
    cin >> n;

    string cadena;
    cout << "Ingrese la cadena de caracteres numéricos: ";
    cin >> cadena;

    // Asegurarse de que la cadena tenga una longitud múltiplo de n
    while (cadena.length() % n != 0) {
        cadena = "0" + cadena;
    }

    int suma = 0;
    for (size_t i = 0; i < cadena.length(); i += n) {
        string subcadena = cadena.substr(i, n);
        suma += stoi(subcadena);
    }

    cout << "Original: " << cadena << ". Suma: " << suma << "." << endl;

    return 0;
}
