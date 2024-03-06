#include <iostream>
#include <string>

using namespace std;


bool esPalindromo(int numero) {
    string str = to_string(numero);
    int len = str.length();
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            return false;
        }
    }
    return true;
}

int Ejercicio14() {
    int numero;
    cout << "Introduce un numero: ";
    cin >> numero;

    if (esPalindromo(numero)) {
        cout << numero << " es un palindromo.";
    } else {
        cout << numero << " no es un palindromo.";
    }

    return 0;
}
