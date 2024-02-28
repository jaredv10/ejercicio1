#include <iostream>

using namespace std;

int ejercicio1(){

    char caracter;
    cout << "Por favor ingrese un caracter: " << endl;
    cin >>caracter;

    if(caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u'
            ||caracter == 'A' ||caracter == 'E' ||caracter == 'I' ||caracter == 'O' || caracter == 'U'){
        cout << caracter << "es una vocal."<<endl;
    }
    else{
        cout << caracter << "es una consonante "<<endl;
    }
    return 0;

}
