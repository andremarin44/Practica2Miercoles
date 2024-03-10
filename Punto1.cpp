#include <iostream>
#include <map>

using namespace std;

void calcularBilletesMonedas(int cantidad) {
    int denominaciones[] = {50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100, 50};
    map<int, int> resultado;

    for (int i = 0; i < 10; ++i) {
        int cantidadBilletesMonedas = cantidad / denominaciones[i];
        resultado[denominaciones[i]] = cantidadBilletesMonedas;
        cantidad -= cantidadBilletesMonedas * denominaciones[i];
    }

    if (cantidad > 0) {
        resultado[0] = cantidad;
    }

    // Mostrar los resultados
    for (auto it = resultado.begin(); it != resultado.end(); ++it) {
        cout << it->first << ": " << it->second << endl;
    }
}

int Ejercicio1(){
    int cantidadDeseada;

    cout << "Ingrese la cantidad de dinero deseada: ";
    cin >> cantidadDeseada;

    calcularBilletesMonedas(cantidadDeseada);

    return 0;
}

