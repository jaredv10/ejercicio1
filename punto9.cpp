#include <iostream>
#include <cmath>


using namespace std;

int Ejercicio9(){
    int N;
        std::cout << "Ingrese un numero entero: ";
        std::cin >> N;

        int suma = 0;
        while (N > 0) {
            int digito = N % 10;
            suma += pow(digito, digito);
            N /= 10;
        }

        std::cout << "El resultado de la suma es: " << suma << std::endl;

        return 0;

}
