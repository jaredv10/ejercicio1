#include <iostream>
#include <cmath>


using namespace std;

int Ejercicio9(){
    int N;
        cout << "Ingrese un numero entero: ";
        cin >> N;

        int suma = 0;
        while (N > 0) {
            int digito = N % 10;
            suma += pow(digito, digito);
            N /= 10;
        }

        cout << "El resultado de la suma es: " << suma << endl;

        return 0;

}
