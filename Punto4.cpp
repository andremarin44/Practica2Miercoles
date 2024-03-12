#include <iostream>
#include <cstdlib>
using namespace std;

int Ejercicio4(){
    char cad[] = "12345";
    int a = atoi(cad);
    cout<<"El numero representado por la cadena es:" <<a<<endl;

    char cad2[10];
    itoa(a,cad2,10);
    cout<<"\n La cadena que representa al numero es: " <<cad2<<endl;

    return 0;
}
