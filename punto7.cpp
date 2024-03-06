#include <iostream>

using namespace std;

int Ejercicio7() {
    int n, a = 1, b = 1, suma = 0;
    cout << "introduce el numero n: ";
    cin >> n;

    while (b < n) {
        if (b % 2 == 0) {
            suma += b;
        }
        int temp = b;
        b = a + b;
        a = temp;
    }

    cout << "El resultado de la suma es: " << suma << endl;

    return 0;
}
