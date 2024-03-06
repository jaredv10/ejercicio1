
#include <iostream>

using namespace std;

int Ejercicio12() {
  int numero, divisor = 2, mayor_factor_primo = 1;

  cout << "Introduzca un numero: ";
  cin >> numero;

  while (divisor * divisor <= numero) {
    while (numero % divisor == 0) {
      numero /= divisor;
      mayor_factor_primo = divisor;
    }
    divisor++;
  }

  if (numero > 1) {
    mayor_factor_primo = numero;
  }

  cout << "El mayor factor primo de " << numero << " es: " << mayor_factor_primo << endl;

  return 0;
}
