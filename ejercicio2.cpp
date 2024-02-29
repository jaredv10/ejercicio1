#include <iostream>


using namespace std;


int Ejercicio2(){
    int cantidad;
    cout << "Ingrese la cantidad de dinero: ";
    cin >> cantidad;

    int billetes[] = {50000, 20000, 10000, 5000, 2000, 1000};
    int monedas[] = {500, 200, 100, 50};

    cout << "Desglose de billetes y monedas:" << endl;
    for (int i = 0; i < 6; ++i) {
        int num_billetes = cantidad / billetes[i];
        cantidad %= billetes[i];
        cout << billetes[i] << " : " << num_billetes << endl;
    }

    for (int i = 0; i < 4; ++i) {
        int num_monedas = cantidad / monedas[i];
        cantidad %= monedas[i];
        cout << monedas[i] << " : " << num_monedas << endl;
    }

    cout << "Faltante: " << cantidad << endl;

    return 0;
}
