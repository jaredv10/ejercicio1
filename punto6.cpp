#include <iostream>

using namespace std;

//especifica el valor y multiplica en 1 cada iterracion hasta n
double factorial(int n) {
    double fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int Ejercicio6() {
    int n;
    cout << "introduce el numero de elementos usados en la aproximacion: ";
    cin >> n;

    double e = 0;
    for(int i = 0; i < n; i++) {
        e += 1 / factorial(i);
    }

    cout << "e es aproximadamente: " << e << endl;

    return 0;
}
