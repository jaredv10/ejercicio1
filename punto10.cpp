#include <iostream>
#include <vector>

using namespace std;

bool esPrimo(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int Ejercicio10() {
    int n, i = 2;
    cout << "Ingrese un numero: ";
    cin >> n;

    while (n > 0) {
        if (esPrimo(i)) {
            --n;
            if (n == 0) {
                cout << "El primo numero " << n << " es: " << i << std::endl;
            }
        }
        ++i;
    }

    return 0;
}
