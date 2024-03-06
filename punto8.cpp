#include <iostream>


using namespace std;

int Ejercicio8() {
    int a, b, c;
    cout << "Introduce los numeros a, b y c: ";
    cin >> a >> b >> c;

    int suma = 0;

    for (int i = 1; i < c; i++) {
        if (i % a == 0 || i % b == 0) {
            suma += i;
        }
    }

    cout << "El resultado de la suma es: " << suma << endl;

    return 0;
}
