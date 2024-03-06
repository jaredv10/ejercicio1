#include <iostream>

using namespace std;



int sumaDiagonalEspiral(int n) {
    int suma = 1;
    for (int i = 3; i <= n; i += 2) {
        suma += 4 * i * i - 6 * (i - 1);
    }
    return suma;
}

int Ejercicio15() {
    int n;
    cout << "Introduce un numero impar: ";
    cin >> n;

    if (n % 2 == 0) {
        cout << "El numero debe ser impar.";
        return 1;
    }

    int suma = sumaDiagonalEspiral(n);
    cout << "En una espiral de " << n << "x" << n << ", la suma es: " << suma << ".";

    return 0;
}
