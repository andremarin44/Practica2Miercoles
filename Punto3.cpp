#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int Ejercicio3(){
    char palabra1[]= "Hola";
    char palabra2[]= "Hola";

    if(strcmp(palabra1,palabra2)==0){
        cout<<"Ambas cadenas son iguales";
    }
    getch();
    return 0;
}
