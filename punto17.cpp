#include <iostream>

using namespace std;



int Ejercicio17() {
    int k;
    cout << "Introduce un número: ";
    cin >> k;

    int n = 1;
    int triangular = n * (n + 1) / 2;
    int contador = 2; // Un número siempre tiene al menos dos divisores: 1 y él mismo

    while (contador <= k) {
        n++;
        triangular = n * (n + 1) / 2;
        contador = 2;
        for (int i = 2; i * i <= triangular; i++) {
            if (triangular % i == 0) {
                if (i * i == triangular) {
                    contador++;
                } else {
                    contador += 2;
                }
            }
        }
    }

    cout << "El número es: " << triangular << " que tiene " << contador << " divisores.\n";

    return 0;
}
