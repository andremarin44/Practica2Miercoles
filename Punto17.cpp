#include <iostream>

using namespace std;
int sumar_amigables(int n);
int sumar_divisores(int n);

int Ejercicio17(){
    cout << "Ingresa un numero: ";
        int n;
        cin >> n;

        int suma = sumar_amigables(n);

        cout << "El resultado de la suma es: " << suma << endl;

        return 0;
    }

    int sumar_amigables(int n) {
        int suma = 0;
        for (int i = 1; i < n; i++) {
            int a = i;
            int b = sumar_divisores(a);
            if (b > a && sumar_divisores(b) == a) {
                suma += a + b;
            }
        }
        return suma;
    }

    int sumar_divisores(int n) {
        int suma = 0;
        for (int i = 1; i <= n / 2; i++) {
            if (n % i == 0) {
                suma += i;
            }
        }
        return suma;
}
