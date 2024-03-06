#include <iostream>
//biblioteca

using namespace std;

int Ejercicio3() {
   // aqui se declara las variables
  int dia, mes;

  cout << "introduzca un mes (1-12): ";
  cin >> mes;
  // se le pide el mes al usuario

  cout << "introduzca un dia(1-31): ";
  cin >> dia;
  // se le pide el dia al usuario

  bool valido = true;
  // declaracion de variable para la validez, identifica si la variable es valida o no

  if (mes < 1 || mes > 12) {
    valido = false;
  } else if (dia < 1 || dia > 31) {
    valido = false;
  } else if (mes == 2 && dia > 28) {
    valido = false;
  }
  // se valida la fecha

  if (valido) {
    cout << dia << "/" << mes << " es una fecha valida." << endl;
  } else {
    cout << dia << "/" << mes << " es una fecha invalida." << endl;
  }
  //imprime el resultado

  return 0;
}
