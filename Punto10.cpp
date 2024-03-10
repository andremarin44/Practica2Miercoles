#include <iostream>
#include <string>

using namespace std;
int convertir(string romano);
int valor(char letra);

int Ejercicio10(){
    cout << "Ingresa un numero romano: ";
    string romano;
    getline(cin, romano);

    int arabigo = convertir(romano);

    cout << "El numero ingresado fue: " << romano << " que corresponde a: " << arabigo << endl;

    return 0;
}

int convertir(string romano) {
    int arabigo = 0;
    for (int i = 0; i < romano.length(); i++) {
        char actual = romano[i];
        char siguiente = romano[i + 1];
        int valor_actual = valor(actual);
        int valor_siguiente = valor(siguiente);
        if (valor_siguiente > valor_actual) {
            arabigo -= valor_actual;
        } else {
            arabigo += valor_actual;
        }
    }
    return arabigo;
}

int valor(char letra) {
    switch (letra) {
        case 'M':
            return 1000;
        case 'D':
            return 500;
        case 'C':
            return 100;
        case 'L':
            return 50;
        case 'X':
            return 10;
        case 'V':
            return 5;
        case 'I':
            return 1;
        default:
            return 0;
    }

}
