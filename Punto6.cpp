#include <iostream>
#include <cctype>

using namespace std;
bool isLowercase(char c);

int Ejercicio6(){
    while (true) {
            cout << "Ingresa una cadena: ";
            string cadena;
            getline(cin, cadena);

            string cadenaMayusculas = "";
            for (int i = 0; i < cadena.length(); i++) {
                char character = cadena[i];
                if (isLowercase(character)) {
                    character = toupper(character);
                }
                cadenaMayusculas += character;
            }

            cout << "Original: " << cadena << endl;
            cout << "En mayuscula: " << cadenaMayusculas << endl;
        }

        return 0;
    }

    bool isLowercase(char c) {
        return (c >= 'a' && c <= 'z');
    }
