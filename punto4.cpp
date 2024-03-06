#include <iostream>
//biblioteca

using namespace std;

// se utiliza bool para indicar si es verdadero o falso

bool esValido(int tiempo) {

    // realiza las operaciones y la almacena en la variables
    int horas = tiempo / 100;
    int minutos = tiempo % 100;
    //verifica la valides en el rango (0000 y 2359)
    return horas >= 0 && horas < 24 && minutos >= 0 && minutos < 60;
}

int Ejercicio4() {
    int tiempoinicial, duracion;
    cout << "introduce el tiempo inicial y la duracion: ";
    cin >> tiempoinicial;
    cout << "introduce la duracion: ";
    cin >> duracion;

    //comprueba si el tiempo inicial y la duracion son validos llamada la funcion esValido

    if (!esValido(tiempoinicial) || !esValido(duracion)) {
        cout << "Uno de los tiempos ingresados no es valido." << endl;
        return 0;
    }

// toma las horas
    int horasinicial = tiempoinicial / 100;
    int minutosinicial = tiempoinicial % 100;

    //toma los minutos

    int horasduracion = duracion / 100;
    int minutosduracion = duracion % 100;

  // calcula hora finales

    int horasfinal = (horasinicial + horasduracion) % 24;
    int minutosFinal = (minutosinicial + minutosduracion) % 60;

    //comprueba la suma

    if (minutosinicial + minutosduracion >= 60) {
      horasfinal++;
    }

    int tiempoFinal = horasfinal * 100 + minutosFinal;

    cout << "La hora es " << tiempoFinal << endl;
    return 0;
}
