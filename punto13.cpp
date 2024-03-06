#include <iostream>

using namespace std;

int Ejercicio13() {
  int numero, suma = 0;

  cout << "Introduzca un numero: ";
  cin >> numero;

  for (int i = 2; i < numero; i++) {
    bool es_primo = true;
    for (int j = 2; j * j <= i; j++) {
      if (i % j == 0) {
        es_primo = false;
        break;
      }
    }
    if (es_primo) {
      suma += i;
    }
  }

  cout << "El resultado de la suma es: " << suma << endl;

  return 0;
}
