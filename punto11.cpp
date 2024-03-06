#include <iostream>

using namespace std;

int mcd(int a, int b);

int Ejercicio11() {
  int numero, mcm = 1;

  cout << "Introduzca un numero: ";
  cin >> numero;

  for (int i = 2; i <= numero; i++) {
    mcm = (mcm * i) / mcd(mcm, i);
  }

  cout << "El minimo comun multiplo es: " << mcm << endl;

  return 0;
}

int mcd(int a, int b) {
  while (b != 0) {
    int temp = b;
    b = a % b;
    a = temp;
  }
  return a;
}
